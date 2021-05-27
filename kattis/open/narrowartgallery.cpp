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

int n, k;
int a[205][205], dp[205][205][205];

int f(int r, int c, int used){
  if (r == n) return 0;

  int &ret = dp[r][c][used];

  if (ret != -1) return ret;

  ret = 0;

  if (used < k) {
    ret = a[r][c] + f(r + 1, c, used + 1);
  }

  if (k - used < n - r){
    int o1 = a[r][c] + a[r][c ^ 1] + f(r + 1, c, used);
    int o2 = a[r][c] + a[r][c ^ 1] + f(r + 1, c ^ 1, used);

    ret = max(ret, max(o1, o2));
  }

  return ret;
}

int main(){
  while (cin >> n >> k, n != 0 || k != 0) {
    memset(dp, -1, sizeof dp);

    for (int i = 0; i < n; i++) {
      scanf("%lld %lld", &a[i][0], &a[i][1]);
    }

    int ans = max(f(0, 0, 0), f(0, 1, 0));
    cout << ans << endl;
  }
  return 0;
}