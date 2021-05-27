/*
ID: samuelh3
TASK: barn1
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
//find the m largest caps, and you got your splits.
int main(){
  ifstream fin ("barn1.in");
  ofstream fout ("barn1.out");
  int m, s, c;
  fin >> m >> s >> c;
  vi barn(c), thing;
  vii diff(c-1);
  rep(i, 0, c){
    fin >> barn[i];
  }
  sort(barn.begin(), barn.end());
  rep(i, 0, c - 1){
    diff[i].fs = barn[i+1] - barn[i];
    diff[i].sc = i;
  }
  sort(diff.begin(), diff.end());
  rep(i, c - 1 - m + 1, c - 1){
    cout << diff[i].fs << ' ' << diff[i].sc << endl;
    thing.push_back(diff[i].sc);
  }
  sort(thing.begin(), thing.end());
  int last = 0, ans = 0;
  rep(i, 0, m - 1){
    cout << barn[thing[i]] << '-' <<  barn[last] << '=' << barn[thing[i]] - barn[last] + 1<< endl;
    ans += barn[thing[i]] - barn[last] + 1;
    last = thing[i] + 1;
  }
  ans += barn[c-1] - barn[last] + 1;
  fout << (m >= c ? c : ans) << endl;
  return 0;
}