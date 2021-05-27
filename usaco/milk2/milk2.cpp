/*
ID: samuelh3
TASK: milk2
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
int main(){
  ifstream fin ("milk2.in");
  ofstream fout ("milk2.out");
  int n;
  fin >> n;
  vii times(n);
  rep(i, 0, n){
    fin >> times[i].fs >> times[i].sc;
  }
  sort(times.begin(), times.end());
  int st = times[0].fs, fn = times[0].sc;
  int mx = fn - st, mn = 0;
  rep(i, 1, n){
    if(times[i].fs <= fn) fn = max(fn, times[i].sc);
    else{
      st = times[i].fs;
      mn = max(mn, st - fn);
      fn = times[i].sc;
    }
    mx = max(mx, fn - st);
  }
  fout << mx << ' ' << mn << endl;
  return 0;
}