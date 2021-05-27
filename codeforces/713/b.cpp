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
  int t;
  cin >> t;
  while(t--){
    int n;
    bool fs = false;
    cin >> n;
    char mp[n][n];
    vii p (2);
    rep(x, 0, n){
      rep(y, 0, n){
        cin >> mp[x][y];
        if(mp[x][y] == '*' && !fs){
          p[0].first = x, p[0].second = y;
          fs = true;
        }
        else if(mp[x][y] == '*'){
          p[1].first = x, p[1].second = y;
        }
      }
    }
    //cout << p[0].first << ' ' << p[0].second << endl;
    //cout << p[1].first << ' ' << p[1].second << endl;
    if(p[0].first == p[1].first){
      mp[(p[0].first + 1) % n][p[0].second] = '*';
      mp[(p[1].first + 1) % n][p[1].second] = '*';
    }
    else if(p[0].second == p[1].second){
      mp[p[0].first][(p[0].second + 1) % n] = '*';
      mp[p[1].first][(p[1].second + 1) % n] = '*';
    }
    else{
      mp[p[0].first][p[1].second] = '*';
      mp[p[1].first][p[0].second] = '*';
    }

    rep(x, 0, n){
      rep(y, 0, n){
        cout << mp[x][y];
      }
      cout << endl;
    }
  }
  return 0;
}