#pragma GCC optimize("Ofast","unroll-loops")
#pragma GCC target("avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) \
  it = (c).begin(); it != (c).end(); ++it)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int INF = ~(1<<31);

const double EPS = 1e-9;
const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) {
  return (a % b + b) % b; }

int binarySearch(vi arr, int l, int r, int x) 
{
  if (arr.empty()) return -1;
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 

int main(){
  int t;
  cin >> t;
  while (t--){
    int n, T;
    cin >> n >> T;
    deque<int> a(n), ca(n);
    vi w, b;
    rep(i, 0, n) {
      cin >> a[i];
      ca[i] = a[i];
    }
    sort(a.begin(), a.end());
    while(!a.empty()){
      int c = a[0];
      if (a.size() == 1) {
        b.push_back(c);
        break;
      }
      
      b.push_back(c);
      a.pop_front();
      if(c > T){
        continue;
      }
      int l = T - c;
      //cout << l << " l" << endl;
      while (l >= a.back()){
        //cout << a.back() << endl;
        if (a.back() == l){
          w.push_back(a.back());
          a.pop_back();
          break;
        }
        b.push_back(a.back());
        a.pop_back();
      }
      //cout << w.size() << ' ' << b.size() << " Inside" << endl;
    }
    //cout << w.size() << ' ' << b.size() << endl;
    sort(b.begin(), b.end());
    //rep(i, 0, b.size()) cout << b[i] << endl;
    rep(i, 0, n){
      int r = binarySearch(b, 0, b.size() - 1, ca[i]);
      //cout << ca[i] << ' ' << binarySearch(b, 0, b.size() - 1, ca[i]) << endl;
      if (r != -1) {
        b.erase(b.begin() + r);
        cout << "1 ";
      }
      else cout << "0 ";
    }
    cout << endl;
  }
}