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
vvi p;

bool check(int x){
  vector<bool> a(n);
  bool pair = false;
  rep(i, 0, m){
    int count = 0;
    rep(j, 0, n){
      if (p[i][j] >= x){
        a[j] = true;
        count++;
      }
    }
    if (count > 1) pair = true;
  }

  if (!pair && n > 1) return false;

  bool ans = true;

  rep(i, 0, n){
    ans &= a[i];
  }

  return ans;
}

int main(){
  int t;
  cin >> t;

  while (t--){
    cin >> m >> n;

    p.assign(m, vi(n));

    rep(i, 0, m){
      rep(j, 0, n){
        cin >> p[i][j];
      }
    }

    int l = 1, r = 2;

    while(check(r)) r *= 2;
    while(r - l > 1){
      int mid = (r + l)/2;
      if (check(mid)) l = mid;
      else r = mid;
    }

    cout << l << endl;
    
  }
  return 0;
}