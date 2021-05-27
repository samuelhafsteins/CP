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

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll y, x;
        cin >> y >> x;
        if (y > x){
            if (y & 1) cout << (y - 1) * (y - 1) + 1 + (x - 1) << endl;
            else cout << y * y - (x - 1) << endl;
        }
        else{
            if (x & 1) cout << x * x - (y - 1) << endl;
            else cout << (x - 1) * (x - 1) + 1 + (y - 1)<< endl;
        }
    }
    return 0;
}