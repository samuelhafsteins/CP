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
  ll n, k;
  cin >> n >> k;
  ll mnHeihgt = 1;
  ll mxHeight = n+1;
  ll mnWidth = 1;
  ll mxWidth;
  ll pw = 1;
  ll sm = 1;

  if (k == 1){
    cout << n + 1 << ' ' << n+1 << endl;
    cout << 1 << ' ' << 1 << endl;
    return 0;
  }

  while(sm+pw*k <= n+1){
    pw *= k;
    sm += pw;
    mnHeihgt += 1;
  }

  if (sm == n+1) mxWidth = pw;

  else{
    mnHeihgt++;
    ll temp = n-(sm-1);
    ll dv = temp/k;
    ll re = temp%k;
    mxWidth = pw + dv*(k-1) + max(0LL, re - 1);
  }

  cout << mnHeihgt << ' ' << mxHeight << endl;
  cout << mnWidth << ' ' << mxWidth << endl;
  return 0;
}