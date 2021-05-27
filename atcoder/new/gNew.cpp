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

vi g[110000];
int dp[110000];

int solve(int at){
  if(dp[at] != -1) return dp[at];
  int ret = 0;
  rep(i, 0, g[at].size()){
    ret = max(ret, solve(g[at][i]) + 1);
  }
  return dp[at] = ret;
}

int main(){
  int n,m;
  cin >> n >> m;
  rep(i, 0, m){
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    
    g[x].pb(y);
  }

  memset(dp, -1, sizeof(dp));
  //cout << 'h' << endl;
  int ans = 0;
  rep(i, 0, n){
    ans = max(ans, solve(i));
  }

  cout << ans << endl;
  return 0;
}