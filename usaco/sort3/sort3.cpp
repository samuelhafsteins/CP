/*
ID: samuelh3
TASK: sort3
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
  int n, count = 0;
  ifstream fin ("sort3.in");
  ofstream fout ("sort3.out");

  fin >> n;
  vi arr(n), s(n);

  rep(i, 0, n){
    fin >> arr[i];
    s[i] = arr[i];
  }

  sort(s.begin(), s.end());

  

  fout << count << endl;
  return 0;
}