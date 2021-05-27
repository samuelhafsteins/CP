/*
ID: samuelh3
TASK: palsquare
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

char value[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};

string base(int num, int base){
  string temp;
  while (num != 0){
    temp = value[num%base] + temp;
    num/=base;
  }

  return temp;
}

bool palindrome(string temp){
  rep(i, 0, temp.length() / 2){
    if (temp[i] != temp[temp.length() - 1 - i]){
      return false;
    }
  }
  return true;
}

//fin = cin | fout = cout
int main(){
  ifstream fin ("palsquare.in");
  ofstream fout ("palsquare.out");
  int B;
  fin >> B;
  rep(i, 1, 301){
    string num = base(i, B);
    string sq = base(i * i, B);

    if (palindrome(sq)) fout << num << ' ' << sq << endl;
  }
  return 0;
}