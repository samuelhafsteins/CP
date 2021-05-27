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

int n, m;
vvi G;

int dp[100050];
bool vis[100050];

void dfs(int u){
  vis[u] = true;
  rep(i, 0, sizeof(G[u])){
    if (!vis[G[u][i]]) dfs(G[u][i]);
    dp[i] = max(dp[i], 1 + dp[G[u][i]]);
  }
}

int findLongestPath(){
  rep(i, 1, n+1){
    if (!vis[i]) dfs(i);
  }

  int ans = 0;
  rep(i, 1, n+1){
    ans = max(ans, dp[i]);
  }

  return ans;
}

int main(){
  cin >> n >> m;

  memset(dp, 0, sizeof(dp));
  memset(vis, false, sizeof(vis));

  G.resize(n + 1);
  rep(i, 0, m){
    int x, y;
    cin >> x >> y;
    G[x].pb(y);
  }

  cout << findLongestPath() << endl;
  return 0;
}