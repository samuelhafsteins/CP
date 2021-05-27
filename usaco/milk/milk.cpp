/*
ID: samuelh3
TASK: milk
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
  ifstream fin ("milk.in");
  ofstream fout ("milk.out");
  int n, m, ans = 0;
  fin >> n >> m;
  deque<ii> a;
  rep(i, 0, m){
    int f, s;
    fin >> f >> s;
    a.push_back({f, s});
    
  }
  sort(a.begin(), a.end());
  //rep(i, 0, m) cout << a[i].fs << ' ' << a[i].sc << endl;
  cout << n << endl;
  while(n != 0){
    ii temp = a.front();
    a.pop_front();
    //cout << temp.fs << endl;
    if(temp.sc > n){
      ans += temp.fs * n;
      n = 0;
    }
    else{
      n-=temp.sc;
      ans += temp.fs * temp.sc;
    }
  }
  fout << ans << endl;
  return 0;
}