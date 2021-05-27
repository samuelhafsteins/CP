/*
ID: samuelh3
TASK: pprime
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

vi ans = {5, 7};

bool isPrime(int p){
  if(p==0 || p == 1) return false;
  if(p == 2 || p == 3) return true;

  rep(i, 2, sqrt(p) + 1){
    if(p % i == 0) return false;
  }

  return true;
}

int check(int a){
  string s = to_string(a);
  string rev;
  for (int i = s.size() - 1; i >= 0; i--) {
    rev = rev.append(1, s[i]);
  };
  if (isPrime(stoi(s+rev))) ans.pb(stoi(s+s));
  rep(i, 0, 10){
    int temp = stoi(s + to_string(i) + rev);
    if (isPrime(temp)) ans.pb(temp);
  }
  return 0;
}

int main(){
  ifstream fin ("pprime.in");
  ofstream fout ("pprime.out");
  
  int a, b;
  fin >> a >> b;

  vi pp;
  rep(i, 1, 1000){
    check(i);
  }
  sort(ans.begin(), ans.end());

  rep(i, 0, ans.size()){
    //cout << ans[i] << ' ' << a << ' ' << b << endl;
    if(ans[i] >= a && ans[i] <= b) fout << ans[i] << endl;
  } 
  return 0;
}