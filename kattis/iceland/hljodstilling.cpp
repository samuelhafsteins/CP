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
typedef vector<ll> vll;
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

ll f(ll x, ll n)
{
    return x/n;
}

ll fast(ll L, ll R, ll n)
{
    return f(R, n) - f(L-1, n);
}

int main()
{
    ios_base::sync_with_stdio(false);

    ll L, R, k;
    cin >> L >> R >> k;
    vector<ll> arr(k);
    rep(i,0,k)
    {
        cin >> arr[i];
    }
    
    ll sm = 0;

    rep(i,1,1<<k)
    {
        ll num = 1, sign = -1;
        rep(j,0,k)
        {
            if(i&(1<<j)) num *= arr[j], sign *= -1;
            if(num > R) break;
        }
        if(num > R) continue;
        sm += sign * fast(L, R, num);
    }

    cout << sm << endl;
}