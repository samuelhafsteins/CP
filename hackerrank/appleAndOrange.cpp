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
  int s,t , a, b, m, n, ansA = 0, ansO = 0;
  cin >> s >> t;
  cin >> a >> b;
  cin >> m >> n;
  rep(i, 0, m){
    int temp;
    cin >> temp;
    if (temp >= s-a && temp <= t-a) ansA++;
  }
  rep(i, 0, n){
    int temp;
    cin >> temp;
    if (temp >= s-b && temp <= t-b) ansO++;
  }
  cout << ansA << endl << ansO << endl;
  return 0;
}