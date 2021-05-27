/*
ID: samuelh3
TASK: transform
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
typedef vector<vector<char>> vvc;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) {
  return (a % b + b) % b; }

vvc fn;
int rotate(vvc mp, int n){
  vvc nw(n, vector<char>(n));
  int cnt = n;
  while(cnt--){
    rep(i, 0, n){
      rep(j, 0, n){
        nw[i][n - 1 - j] = mp[j][i];
      }
    }
    if(nw == fn){
      return n - cnt;
    }
    mp = nw;
  }
  return -1;
}

vvc reflect(vvc mp, int n){
  vvc nw(n, vector<char>(n));
  rep(i, 0, n){
    rep(j, 0, n){
      nw[i][j] = mp[i][n - 1 - j];
    }
  }
  return nw;
}
//fin = cin | fout = cout
int main(){
  ifstream fin ("transform.in");
  ofstream fout ("transform.out");
  int n;
  fin >> n;
  vvc st(n, vector<char>(n));
  fn.resize(n, vector<char>(n));
  rep(i, 0, n){
    string temp;
    fin >> temp;
    rep(j, 0, n){
      st[i][j] = temp[j];
    }
  }
  rep(i, 0, n){
    string temp;
    fin >> temp;
    rep(j, 0, n){
      fn[i][j] = temp[j];
    }
  }
  int test = rotate(st, n);
  vvc t = reflect(st, n);
  if(test != -1) fout << test << endl;
  else if(t == fn) fout << 4 << endl;
  else if(rotate(t, n) != -1) fout << 5 << endl;
  else if(st == fn) fout << 6 << endl;
  else fout << 7 << endl;
  rep(i, 0, n){ 
    rep(j, 0, n){
      cout << t[i][j];
    }
    cout << endl;
  } 
  return 0;
}