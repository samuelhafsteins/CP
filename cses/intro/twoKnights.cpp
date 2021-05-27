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

ll calc(ll n){
    return (n * n * (n * n - 1) - 8 - 24 - (n-4) * 16 - 16 - 24 * (n - 4) - 8 * (n-4) * (n - 4))/2;
    //       n^2 * (n^2 -1) - (4 * 2) - (8 * 3) - ((n - 4) * 4 * 4) - ((n-4) * 6 * 4) - (8 * (n - 4) * (n - 4))
}

int main() {
    ll n;
    cin >> n;
    rep(i, 1, n+1){
        cout << calc(i) << endl;
    }
    return 0;
}

// 0
// 6 6
// 28 22
// 96 68
// 252 156
// 550 298
// 1056 506
// 1848 792