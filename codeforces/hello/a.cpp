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

int main(){
  int t, n, k;
  cin >> t;
  while(t--){
    cin >> n >> k;
    vector<vector<char>> ans(n, vector<char>(n));
    if (k <= (n + 1)/2){
      rep(i, 0, n){
        rep(j, 0, n){
          if (i == j && !(i & 1) && !(j & 1) && k > 0){
            cout << 'R';
            k--;
          }
          else {
            cout << '.';
          }
        }
        cout << endl;
      }
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}