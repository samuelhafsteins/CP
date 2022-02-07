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
  int t, n, l, r, c;
  cin >> t;
  while(t--){
    cin >> n;
    int lCost = INF, rCost = INF, mnL = INF, mxR = 0, cost = INF;
    rep(i, 0, n){
      cin >> l >> r >> c;

      if (l == mnL && r == mxR){
        cost = min(cost, c);
        lCost = min(lCost, c);
        rCost = min(rCost, c);
      }
      else if (l <= mnL && r >= mxR){
        lCost = ((l < mnL) ? c : min(lCost, c));
        mnL = l;
        rCost = (r > mxR) ? c : min(rCost, c);
        mxR = r;
        cost = c;
      }
      else if (r == mxR){
        rCost = min(rCost, c);
        cost = min(cost, lCost + rCost);
      }
      else if (r > mxR){
        rCost = c;
        mxR = r;
        cost = lCost + rCost;
      }
      else if (l == mnL){
        lCost = min(lCost, c);
        cost = min(cost, lCost + rCost);
      }
      else if (l < mnL){
        lCost = c;
        mnL = l;
        cost = lCost + rCost;
      }

      cout << cost << endl;
    }
  }
  return 0;
}