/*
ID: samuelh3
TASK: crypt1
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
vector<int> digits;
int a, b, c, d, e, abc, de;
bool oneof1(int n) {
  int count1 = 1;
  while (true) {
    if (count1 > n)break;
    else {
      count1 = count1 * 10;
      int digit = n%count1 / (count1 / 10);
      if (!count(digits.begin(), digits.end(), digit) ){
        return false;
      }
      n = n - n%count1;
    }
  }
  return true;  // this was missing
}

 bool check() {
    int n = abc*e;
    int n1 = abc*d;
    if (n > 999 || n < 100)return false;
    if (n1 > 999 || n1 < 100)return false;

    if ((n1 * 10 + n) > 9999 || (n1 * 10 + n) < 1000)return false;
    if (oneof1(n) && oneof1(n1) && oneof1(n1 * 10 + n)) {
      return true;
    }
    return false;  // this was missing
}

int main() {
  ofstream fout("crypt1.out");
  ifstream fin("crypt1.in");
  int count = 0;
  int n;
  fin >> n;
  for (int i = 0; i < n; i++) {
    int f;
    fin >> f;
    digits.push_back(f);
  }

  for (int i = 0; i < n; i++) {
    a = digits[i];
    for (int i1 = 0; i1 < n; i1++) {
      b = digits[i1];
      for (int i2 = 0; i2 < n; i2++) {
        c = digits[i2];
        for (int i3 = 0; i3 < n; i3++) {
          d = digits[i3];
          for (int i4 = 0; i4 < n; i4++) {
            e = digits[i4];
            abc = a * 100 + b * 10 + c;
            de = d * 10 + e;
            if (check()) {
              count++;
            }
          }
        }
      }
    }

  }
  fout << count << endl;
  return 0;
}