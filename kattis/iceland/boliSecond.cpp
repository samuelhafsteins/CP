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
#define pb push_back
#define fs first
#define sc second
const int INF = ~(1<<31);

const double EPS = 1e-9;
const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) {
  return (a % b + b) % b; }

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) { 
    return (a.second < b.second); 
}

int getClosest(vi, int, int, int);

int findClosest(vi arr, int n, int target) 
{ 
    // Corner cases 
    if (target <= arr[0]) 
        return 0; 
    if (target >= arr[n - 1]) 
        return n - 1; 
  
    // Doing binary search 
    int i = 0, j = n, mid = 0; 
    while (i < j) { 
        mid = (i + j) / 2; 
  
        if (arr[mid] == target) 
            return mid; 
  
        /* If target is less than array element, 
            then search in left */
        if (target < arr[mid]) { 
  
            // If target is greater than previous 
            // to mid, return closest of two 
            if (mid > 0 && target > arr[mid - 1]) 
                return getClosest(arr, mid - 1, mid, target); 
  
            /* Repeat for left half */
            j = mid; 
        } 
  
        // If target is greater than mid 
        else { 
            if (mid < n - 1 && target < arr[mid + 1]) 
                return getClosest(arr, mid, mid + 1, target); 
            // update i 
            i = mid + 1;  
        } 
    }
    // Only single element left after search
    return mid; 
}

int getClosest(vi arr, int val1, int val2, int target) { 
  if (target - arr[val1] >= arr[val2] - target) 
    return val2; 
  else
    return val1; 
} 

int main(){
  int n;
  cin >> n;
  vii pairs(n);
  vi shirts(n);
  rep(i, 0, n) cin >> pairs[i].fs >> pairs[i].sc;
  rep(i, 0, n) cin >> shirts[i];
  sort(pairs.begin(), pairs.end(), sortbysec);
  sort(shirts.begin(), shirts.end());
  int nm;
  rep(i, 0, n){
    nm = pairs[i].sc;
    //cout << nm << endl;
    int temp = findClosest(shirts, shirts.size(), nm);
    //cout <<  temp << endl;
    if(!(shirts[temp] >= pairs[i].fs && shirts[temp] <= pairs[i].sc)) {
      cout << "Neibb" << endl;
      return 0;
    }
  }
  //This work for second sort
  //check out back and forth from front to back
  //cout << "Jebb" << endl;
  return 0;
}