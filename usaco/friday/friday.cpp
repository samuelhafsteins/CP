/*
ID: samuelh3
TASK: friday
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
  ifstream fin ("friday.in");
  ofstream fout ("friday.out");
  int n;
  fin >> n;
  int year = 1900;
  int c = 0;
  map<int ,int> cnt;
  rep(i, 0, 7){
    cnt[i] = 0;
  }
  rep(i, 0, n){
    //cout << c << ' ' << year << endl;
    if((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)){
      cnt[c % 7] += 3;
      cnt[(c + 1) % 7] += 1;
      cnt[(c + 2) % 7] += 1;
      cnt[(c + 3) % 7] += 2;
      cnt[(c + 4) % 7] += 2;
      cnt[(c + 5) % 7] += 1;
      cnt[(c + 6) % 7] += 2;
      c += 2;
    }
    else{
      //cout << c << " c" << endl;
      cnt[c % 7] += 2;
      cnt[(c + 1) % 7] += 1;
      cnt[(c + 2) % 7] += 1;
      cnt[(c + 3) % 7] += 3;
      cnt[(c + 4) % 7] += 1;
      cnt[(c + 5) % 7] += 2;
      cnt[(c + 6) % 7] += 2;
      c++;
    }
    c %= 7;
    year++;
  }
  rep(i, 0, 7){
    fout << cnt[i] << (i != 6 ? " " : "");
  }
  fout << endl;
  return 0;
}