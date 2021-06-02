/*
ID: samuelh3
TASK: castle
LANG: C++14                 
*/
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

//fin = cin | fout = cout

int m, n, l, r;
int a[55][55], g[55][55];
map<int, int> mp;
char site;

void fill(int y, int x, int c){
  if (x < 0 || x >= m || y < 0 || y >= n) return;
  if (g[y][x] != -1) return;

  //cout << x << ' ' << y << endl;

  //cout << g[x][y] << ' ' << a[x][y] << endl;
  mp[c]++;
  //cout << mp[c] << endl;

  g[y][x] = c;

  //cout << a[x][y] << endl;

  if ( a[y][x] >= 8) a[y][x] -= 8;
  else fill(y+1, x, c);

  if ( a[y][x] >=4 ) a[y][x] -= 4;
  else fill(y, x+1, c);

  if ( a[y][x] >= 2 ) a[y][x] -= 2;
  else fill(y-1, x, c);

  if ( a[y][x] >= 1 ) a[y][x] -= 1;
  else fill(y, x-1, c);

  return;
}

int main(){
  ifstream fin ("castle.in");
  ofstream fout ("castle.out");
  fin >> m >> n;

  memset(g, -1, sizeof(g));

  rep(i, 0, n){
    rep(j, 0, m){
      fin >> a[i][j];
    }
  }

  int mx1 = 0, mx2 = 0;

  int c = 0;
  rep(i, 0, n){
    rep(j, 0, m){
      if (g[i][j] == -1){
        fill(i, j, c);
        mx1 = max(mx1, mp[c]);
        c++;
      }
      //break;
    }
    //break;
  }

  rep(i, 0, m){
    for (int j = n-1; j >= 0; j--){
      if (g[j][i] != g[j-1][i] && mx2 < (mp[g[j][i]] + mp[g[j-1][i]]) && j >= 1){
        mx2 = (mp[g[j][i]] + mp[g[j-1][i]]);
        l = j+1;
        r = i+1;
        site = 'N';
      } else if (g[j][i] != g[j][i+1] && mx2 < (mp[g[j][i]] + mp[g[j][i+1]]) && i != m){
        mx2 = (mp[g[j][i]] + mp[g[j][i+1]]);
        l = j+1;
        r = i+1;
        site = 'E';
      }
    }
  }

  fout << c << endl;
  fout << mx1 << endl;
  fout << mx2 << endl;
  fout << l << ' ' << r << ' ' << site << endl;


  
  return 0;
}