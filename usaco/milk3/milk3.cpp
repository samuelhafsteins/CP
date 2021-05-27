/*
ID: samuelh3
TASK: milk3
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

bool f[21][21][21] = {false};
bool ans[21] = {false};
int aMax, bMax, cMax;

void rec(int a, int b, int c){
  if (f[a][b][c]) return;
  f[a][b][c] = true;

  if (a==0) ans[c] = true;

  // A->B
  if (a+b>bMax) rec(a+b-bMax, bMax, c);
  else rec(0, a+b, c);

  // A->C
  if (a+c>cMax) rec(a+c-cMax, b, cMax);
  else rec(0, b, a+c);

  // B->A
  if (a+b>aMax) rec(aMax, a+b-aMax, c);
  else rec(a+b, 0, c);

  // B->C
  if (b+c>cMax) rec(a, b+c-cMax, cMax);
  else rec(a, 0, b+c);

  // C->A
  if (a+c>aMax) rec(aMax, b, a+c-aMax);
  else rec(a+c, b, 0);

  // C->B
  if (b+c>bMax) rec(a, bMax, b+c-bMax);
  else rec(a, b+c, 0);
}



int main(){
  ifstream fin ("milk3.in");
  ofstream fout ("milk3.out");
  fin >> aMax >> bMax >> cMax;

  rec(0, 0, cMax);

  stringstream temp;
  string s;
  rep(i, 0, 21){
    if(ans[i]) temp << i << " ";
  }

  getline(temp, s);

  s = s.substr(0, s.length()-1);

  fout << s << endl;

  return 0;
}