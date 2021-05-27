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

ll mod = 10e9 + 7;

template <class T>
T mod_pow(T b, T e, T m) {
  T res = T(1);
  while (e) {
    if (e & T(1)) res = smod(res * b, m);
    b = smod(b * b, m), e >>= T(1); }
  return res; }

int main(){
  ll n, count = 0, twos = 0;
  cin >> n;
  vector<ll> arr(n), ans;
  rep(i, 0, n){
    cin >> arr[i];
  }
  rep(i, 0, n){
    if (arr[i] == 1) ans.push_back(twos);
    else if(arr[i] == 2) twos++;
    else{
      rep(i, 0, ans.size()){
        //cout << twos - ans[i] << endl;
        count += (mod_pow(2ll, twos - ans[i], mod) - 1) % mod;
      }
      //cout << count << endl;
    }
  }
  cout << count % mod << endl;
  return 0;
}