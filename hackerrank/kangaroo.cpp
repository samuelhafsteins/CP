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

int main(){
  double x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;
  if ((int) ((x2 - x1)/(v1 - v2)) == (x2 - x1)/(v1 - v2) && (x2 - x1)/(v1 - v2) > 0) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}

//x1 + v1*j = x2 + v2*j
//v1*j - v2*j = x2 - x1
//j = (x2 - x1)/(v1 - v2)