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

int main() {
    string n;
    cin >> n;
    //vector<char> ans(n.size());
    //priority_queue <char> q;
    sort(n.begin(), n.end());
    //rep(i, 0, n.size()) q.push(n[i]);

    //if string is odd numbers long
    if (n.size() & 1){
      return 0;
    }
    //if string is even numbers long
    else{
      //vector <char> a(n.size()/2), b(n.size()/2);
      string a[n.size()/2 + 1], b[n.size()/2 + 1];
      rep(i, 0, n.size()){
        if (i & 1){
          a[i/2] = n[i];
        }
        else{
          //cout << i << ' ' << n[i];
          b[i/2] = n[i];
        }
      }
      if (*a == *b){
        cout << *a << *b << endl;
      }
      else{
        //cout << a << ' ' << b << endl;
        cout << "NO SOLUTION" << endl;
      }
    }
    return 0;
}

//no work