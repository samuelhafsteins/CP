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

ll n, mn = INF;
vector<ll> a, x;

void test(){
    ll s1 = 0, s2 = 0, px = 0, mnLocal = 0;
    rep(i, 0, n){
        if(px < x.size() && x[px] == i){
            mnLocal += a[i];
            px++;
        }
        else{
            mnLocal -= a[i];
        }
    }
    mn = min(mn, abs(mnLocal));
}

void solve(ll i){
    if (i == n){
        test();
        return;
    }

    solve(i+1);
    x.push_back(i);
    solve(i+1);
    x.pop_back();
}

int main() {
    cin >> n;
    a.resize(n);
    rep (i, 0, n) cin >> a[i];

    solve(0);

    cout << mn;
    return 0;
}