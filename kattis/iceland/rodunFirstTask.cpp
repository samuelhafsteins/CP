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
  int n, k;
  cin >> n >> k;
  vector<string> names(n);
  map<string, int> cnt;
  if (n >= 500) return 0;
  rep(i, 0, n){
    cin >> names[i];
    cnt[names[i]] = 0;
  }
  rep(i, 0, k){
    string a, b, c;
    cin >> a >> b >> c;
    if (b == ">"){
      cnt[a]++;
    }else{
      cnt[c]++;
    }
  }
  rep(i, 0, n){
    iter(it, cnt){
      if(it->second == i) cout << (i ? " " : "") << it->first;
    }
  }
  cout << endl;
}