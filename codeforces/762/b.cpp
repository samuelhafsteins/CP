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
  int t, n;
  cin >> t;
  while (t--) {
    map<int, int> mp;
    vi nums = {1};
    cin >> n;
    int sm = 0;

    int sq = sqrt(n);
    int cb = cbrt(n);

    rep(i, 0, sq + 1){
      if (mp[pow(i, 2)]){
        //cout << pow(i, 2) << ' ' << i << endl;
        nums.pb(i);
      }
      mp[pow(i, 2)] = 1;
      mp[pow(i, 3)] = 1;
    }

    cout << sq + cb - nums.size() << endl;;

  }
  return 0;
}