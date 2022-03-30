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
  vi arr(n);
  int c1 = 0, c2 = 0, c3 = 0;

  rep(i, 0, n){
    fin >> arr[i];
    if (arr[i] == 1) c1++;
    else if (arr[i] == 2) c2++;
    else c3++;
  }

  cout << c1 << ' ' << c2 << ' ' << c3 << endl;


  int c12 = 0, c13 = 0;
  rep(i, 0, c1){
    if (arr[i] == 2) c12++;
    else if (arr[i] == 3) c13++;
  }
  int c21 = 0, c23 = 0;
  rep(i, c1, c2 + c1){
    if (arr[i] == 1) c21++;
    else if (arr[i] == 3) c23++;
  }
  int c31 = 0, c32 = 0;
  rep(i, c2 + c1, n){
    if (arr[i] == 1) c31++;
    else if(arr[i] == 2) c32++;
  }

  cout << c12 << ' ' << c13 << endl;
  cout << c21 << ' ' << c23 << endl;
  cout << c31 << ' ' << c32 << endl;


  count += min(c12, c21);
  int l1 = abs(c12 - c21);
  count += min(c13, c31);
  int l2 = abs(c13 - c31);
  count += min(c23, c32);
  int l3 = abs(c23 - c32);

  count += l1 * 2;

  fout << count << endl;
  cout << l1 << ' ' << l2 << ' ' << l3 << endl;
  return 0;
}