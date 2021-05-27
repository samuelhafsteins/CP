/*
ID: samuelh3
LANG: C++14           
PROG: ride
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
  ofstream fout ("ride.out");
  ifstream fin ("ride.in");
  string A, B;
  fin >> A >> B;
  ll sm1 = 1, sm2 = 1;
  rep(i, 0, A.size()){
    sm1 *= A[i] - 64;
    sm1 %= 47;
    //cout << A[i] - 64 << ' ';
  }
  //cout << endl;
  rep(i, 0, B.size()){
    sm2 *= B[i] - 64;
    sm2 %= 47;
    //cout << B[i] - 64 << ' ';
  }
  //cout << endl;
  //cout << sm1 << ' ' << sm2 << endl;
  fout << (sm1 == sm2 ? "GO" : "STAY") << endl;
  return 0;
}