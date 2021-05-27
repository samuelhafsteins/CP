/*
ID: samuelh3
TASK: sprime
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
int n;

vvi sp(9);

bool isPrime(int p){
  if(p==0 || p == 1) return false;
  if(p == 2 || p == 3) return true;

  rep(i, 2, sqrt(p) + 1){
    if(p % i == 0) return false;
  }

  return true;
}

int main(){
  ifstream fin ("sprime.in");
  ofstream fout ("sprime.out");

  fin >> n;

  sp[1] = {2, 3, 5, 7};
  rep(i, 1, 8){
    int l = sp[i].size();
    rep(j, 0, l){
      for (int x = 1; x < 10; x += 2){
        int temp = sp[i][j] * 10 + x;
        if(isPrime(temp)) sp[i+1].pb(temp);
      }
    }
  }

  //cout << "hi" << endl;
  rep(j, 0, sp[n].size()){
    fout << sp[n][j] << endl;
  }
  return 0;
}