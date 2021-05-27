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
vvi mp;
vvi vis;

int check(int i, int j){
  int sm = 0;
  if (j != 0)
    if (mp[i][j-1] == 1) sm++;
  if (j < m + 1)
    if (mp[i][j+1] == 1) sm++;
  if (i != 0)
    if (mp[i-1][j] == 1) sm++;
  if (i < n + 1)
    if (mp[i+1][j] == 1) sm++;
  return sm;
}

int bfs(int i, int j){
  if (i == n+2 || j == m+2 || i == -1 || j == -1) return 0;
  if (vis[i][j] || mp[i][j]) return 0;
  vis[i][j] = 1;
  return check(i, j) + bfs(i, j+1) + bfs(i+1, j) + bfs(i-1, j) + bfs(i, j-1);
}

int main(){
  cin >> n >> m;
  mp.resize(n + 2, vi (m + 2));
  vis.resize(n + 2, vi (m + 2));

  rep(i, 1, n+1){
    string tmp;
    cin >> tmp;
    rep(j, 1, m+1){
      mp[i][j] = tmp[j-1] - '0';
    }
  }

  /*
  rep(i, 0, n+2){
    rep(j, 0, m+2){
      cout << mp[i][j];
    }
    cout << endl;
  }
  */

  cout << bfs(0, 0) << endl;

  return 0;
}