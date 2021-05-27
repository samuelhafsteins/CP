/*
ID: samuelh3
TASK: combo
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
  ifstream fin ("combo.in");
  ofstream fout ("combo.out");
  int n, ans = 250;
  fin >> n;
  vi main(3), master(3);
  rep(i, 0, 3){
    fin >> main[i];
  }
  rep(i, 0, 3){
    fin >> master[i];
  }
  int minus = 1;
  bool yes = false;
  rep(i, 0, 3){
    int diff;
    if(master[i] < main[i]){
      diff = min(abs(master[i] - main[i]), abs(n + master[i] - main[i]));
    }
    else{
      diff = min(abs(master[i] - main[i]), abs(master[i] - (n + main[i])));
    }
    cout << diff << endl;
    switch(diff){
      case 0:
        minus *= 5;
        yes = true;
        break;
      case 1:
        minus *= 4;
        yes = true;
        break;
      case 2:
        minus *= 3;
        yes = true;
        break;
      case 3:
        minus *= 2;
        yes = true;
        break;
      case 4:
        minus *= 1;
        yes = true;
        break;
    }
  }

  switch(n){
    case 1:
      cout << 1 << endl;
      fout << 1 * 1 * 1 << endl;
      break;
    case 2:
      cout << 2 << endl; 
      fout << 2 * 2 * 2 << endl;
      break;
    case 3:
      cout << 3 << endl;
      fout << 3 * 3 * 3 << endl;
      break;
    case 4:
      cout << 4 << endl;
      fout << 4 * 4 * 4 << endl;
      break;
    default:
      cout << 5 << endl;
      fout << (yes ? ans - minus : ans) << endl;
      break;
  }
  cout << ans << ' ' << minus << endl;

  //5+ = 0
  //4 = 1
  //3 = 2
  //2 = 3
  //1 = 4
  //0 = 5

  return 0;
}