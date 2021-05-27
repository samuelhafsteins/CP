//#pragma GCC optimize("Ofast","unroll-loops")
//#pragma GCC target("avx2,fma")
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
  int n;
  cin >> n;
  vector<vector<double>> f(n, vector<double>(3));
  rep(i, 0, n){
    cin >> f[i][0] >> f[i][1] >> f[i][2];
  }
  sort(f. begin(), f.end());
  int m;
  cin >> m;
  rep(i, 0, m){
    double t, fl, mn, mx, sm = 0;
    cin >> t >> fl;
    double flow = fl;
    double count = 0;
    rep(j, 0, n) {
      flow -= f[j][1];
      count += f[j][1] * f[j][0];
      sm += f[j][1];
    }
    if(flow < 0 || sm > flow){
      cout << "no" << endl;
      continue;
    }
    int j = 0;
    while(flow != 0){
      double top = f[j][2], bot = f[j][1];
      if(top <= flow){
        flow -= top - bot;
        count += (top - bot) * f[j][0];
      }
      else if (flow < top){
        count += flow * f[j][0];
        flow = 0;
      }
      j++;
    }
    mn = count/fl;
    flow = fl;
    count = 0;
    rep(j, 0, n) {
      flow -= f[j][1];
      count += f[j][1] * f[j][0];
    }
    if(flow < 0 || sm > flow){
      cout << "no" << endl;
      continue;
    }
    j = n-1;
    //cout << "before max " << flow << ' ' << count << endl;
    while(flow != 0){
      double top = f[j][2], bot = f[j][1];
      if(top <= flow){
        flow -= top - bot;
        count += (top - bot) * f[j][0];
      }
      else if (flow < top){
        count += flow * f[j][0];
        flow = 0;
      }
      j--;
    }
    mx = count/fl;
    cout << (t >= mn && t <= mx ? "yes" : "no") << endl;
  }
}