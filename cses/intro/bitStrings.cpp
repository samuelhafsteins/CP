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

#define mod 1000000007
ll modPow (ll b, ll e, ll m){
  if (m == 1)
    return 0;
  
  ll r = 1;

  b %= m;

  while(e){
    if(e%2)
      r = (r*b) % m;

    b = (b*b) % m, e /= 2;
  }
  //cout << r << ' ' << endl;
  return r;
}

int main() {
    ll n;
    cin >> n;
    cout << modPow(2, n, mod) << endl;
    return 0;
}