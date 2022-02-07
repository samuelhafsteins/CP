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
  while (t--){
    cin >> n;
    ll a[n];
    ll c = 0, mx = 0, sm = 0;
    rep(i, 0, n){
      cin >> a[i];
      while(a[i] % 2 == 0){
        c++;
        a[i] /= 2;
      }
      mx = max(mx, a[i]);
      sm += a[i];
    }

    cout << (1l << c) * mx + (sm - mx) << endl;

  }
  return 0;
}