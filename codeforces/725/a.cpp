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

#define ROM_10000000_0 0
#define _LD(x, y) ROM_ ## x ## _ ## y //ROM_+x+_+y
#define LD(x, y) _LD(x, y)
#define _MA(l0, l1, l2, l3, l4, l5, l6, l7) l7 ## l6 ## l5 ## l4 ## l3 ## l2 ## l1 ## l0 // l7+l6+l5+l4+l3+l2+l1_l0
#define MA(l0, l1, l2, l3, l4, l5, l6, l7) _MA(l0, l1, l2, l3, l4, l5, l6, l7) // just calls _MA()
#define l MA(l0, l1, l2, l3, l4, l5, l6, l7) //calls _MA()

#define l0 0
#define l1 0
#define l2 0
#define l3 0
#define l4 0
#define l5 0
#define l6 0
#define l7 1

#if LD(l, 0)
#error YES
#else
#error NO
#endif


int main(){
  int n, t;
  cin >> t;
  while (t--){
    vi a;
    cin >> n;
    rep (i, 0, n){
      cin >> a[i];
    }
  }
  return 0;
}