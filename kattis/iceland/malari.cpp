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
  ll n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> parts(m);
  rep(i, 0, m){
    cin >> parts[i].fs >> parts[i].sc;
  }
  sort(parts.begin(), parts.end());
  ll ans = 0;
  ll st = parts[0].fs, fn = parts[0].sc;
  rep(i, 1, m){
    if(parts[i].fs <= fn) fn = max(fn, parts[i].sc);
    else{
      ans += fn - st + 1;
      st = parts[i].fs;
      fn = parts[i].sc;
    }
  }
  ans += fn - st + 1;
  cout << ans << endl;
  cout << (n/2 > ans ? "The Mexicans are Lazy! Sad!" : "The Mexicans took our jobs! Sad!");
  return 0;
}