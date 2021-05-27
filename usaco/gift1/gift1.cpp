/*
ID: samuelh3
TASK: gift1
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
  ifstream fin ("gift1.in");
  ofstream fout ("gift1.out");
  int n;
  fin >> n;
  vector<string> names(n);
  map<string, int> cnt;
  rep(i, 0, n){
    fin >> names[i];
    cnt[names[i]] = 0;
  }
  //cout << "Input 1 done" << endl;
  string name, r;
  int mon = 0, k = 0;
  rep(i, 0, n){
    fin >> name;
    fin >> mon >> k;
    //cout << mon << ' ' << k << endl;;
    if (k != 0){
      cnt[name] -= mon;
      cnt[name] += mon % k;
      mon = mon / k;
      cout << mon << " mon" << endl;

      rep(j, 0, k){
        fin >> r;
        cnt[r] += mon;
      }
    }
  }
  iter(it, names){
    fout << *it << ' ' << cnt[*it] << endl;
  }
  return 0;
}