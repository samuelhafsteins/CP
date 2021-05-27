/*
ID: samuelh3
TASK: namenum
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
  string x;
  ifstream dict;
  ifstream fin ("namenum.in");
  ofstream fout ("namenum.out");
  dict.open("dict.txt");
  string temp;
  fin >> temp;
  int n = temp.size();
  vi nm(n);
  rep(i, 0, n){
    nm[i] = temp[i] - '0';
  }
  bool none = true;
  //cout << endl;
  char test = 'R' - 64;
  //cout << (int)test << endl;
  while(getline(dict, x)){
    if(x.size() == n){
      bool good = true;
      rep(i, 0, n){
        int t = ((int)x[i] - 64);
        cout << ceil(((int)x[i] - 64)/3.0) + 1;
        //cout << (t > 18 ? t - 1 : t)/3.0 + 1 << endl;
        if(ceil((t > 18 ? t - 1 : t)/3.0) + 1 != nm[i]){
          good = false;
          break;
        }
      }
      if(good){
        none = false;
        fout << x << endl;
      }
      cout << endl;
    }
  }
  if(none) fout << "NONE" << endl;
  dict.close();
  return 0;
}