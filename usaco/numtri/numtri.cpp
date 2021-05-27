/*
ID: samuelh3
TASK: numtri
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
int memo[1050][1050];
int n;
vvi a(1050, vi(1050));

int dp(int at, int x){
  if(at > n-1 || x > at || at < 0 || x < 0) return 0;
  if(memo[at][x] != -1) return memo[at][x];
  return memo[at][x] = max(a[at][x] + dp(at-1, x), a[at][x] + dp(at-1, x-1));
}

int main(){
  ifstream fin ("numtri.in");
  ofstream fout ("numtri.out");
  
  fin >> n;

  memset(memo, -1, sizeof(memo));

  rep(i, 0, n){
    rep(j, 0, i+1){
      fin >> a[i][j];
    }
  }

  int sm = 0;
  rep(i, 0, n){
    sm = max(sm, dp(n-1, i));
  }

  fout << sm << endl;
  return 0;
}