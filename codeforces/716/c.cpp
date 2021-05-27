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

ll n;
bool good[100005];
bool coprime(ll a){
  if (__gcd(a, n) == 1) return true;
  return false;
}

int main(){
  cin >> n;
  ll pro = 1;
  vector<ll> ans;
  rep(i, 1, n){
    if (coprime(i)){
      good[i] = 1;
      pro = (pro*i)%n;
    }
  }
  if (pro != 1) good[pro] = 0;
  cout << count(good+1, good+n,1) << endl;
  rep(i, 0, n){
    if (good[i]) cout << i << ' ';
  }
  cout << endl;

  return 0;
}