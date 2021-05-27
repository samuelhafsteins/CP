#pragma GCC optimize("Ofast","unroll-loops")
#pragma GCC target("avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) \
  it = (c).begin(); it != (c).end(); ++it)
typedef pair<int, int> ii;
typedef vector<long long> vi;
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

int main(){
  ll n, sm = 0;
  cin >> n;
  ll c[n];
  vi ans(n);
  rep(i, 0, n){
    cin >> c[i];
    ans[i]++;
    //cout << ans[i] << ' ';
  }
  //cout << endl;
  rep(i, 1, n){
    if(c[i] > c[i-1]) {
      ans[i] += ans[i-1];
    }
    //cout << ans01[i] << ' ';
    //sm += ans[i];
  }
  for (ll i = n - 2; i >= 0; --i){
    if(c[i] > c[i+1]){
      ans[i] = max(ans[i], 1 + ans[i+1]);
    }
    sm += ans[i];
    //cout << ans[n - 1 - i] << ' ';
  }
  sm += ans[n-1];
  cout << sm << endl;
}