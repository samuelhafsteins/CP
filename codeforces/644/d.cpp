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

int lowest(int n, int k){
    if (k >= n) return 1;
    if (n % 2 == 0 && n/2 <= k) return 2;

    rep(i, 3, sqrt(n)){
        if (n % i == 0 && n/i <= k) return i;
    }
    return n;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        cout << lowest(n, k) << endl;
    }
    return 0;
}