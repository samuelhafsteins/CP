/*
ID: samuelh3
TASK: frac1
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

//Check if they have a gcd, if they don't push them

vi primes, noPrimes;
vector<pair<double, string>> ans;

int gcd(int a, int b){
  if (a == b) return a;
  if (a > b) return gcd(a-b, b);
  return gcd(a, b-a);
}

bool isPrime(int p){
  if(p==0 || p == 1) return false;
  if(p == 2 || p == 3) return true;

  rep(i, 2, sqrt(p) + 1){
    if(p % i == 0) return false;
  }

  return true;
}

int main(){
  int n;
  ifstream fin ("frac1.in");
  ofstream fout ("frac1.out");
  
  fin >> n;

  rep(i, 1, n+1){
    rep(j, 1, i){
      if (gcd(i, j) == 1) ans.pb({(1.0 * j)/i, to_string(j) + "/" + to_string(i)});
    }
  }

  ans.pb({0.0, "0/1"});
  ans.pb({1.0, "1/1"});
  
  sort(ans.begin(), ans.end());

  rep(i, 0, ans.size()){
    //cout << ans[i].fs << ' ' << ans[i].sc << endl;
    fout << ans[i].sc << endl;
  }
  
  return 0;
}