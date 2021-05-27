/*
ID: samuelh3
TASK: skidesign
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
vi hills;

int solve(){
  int ans = 10e6;
  rep(i, 0, hills[n-1] + 1 - 17){
    int temp = 0;
    rep(j, 0, n){
      if(!(hills[j] >= i && hills[j] <= i+17)){
        temp += min(abs(i + 17 - hills[j]) * abs(i + 17 - hills[j]), abs(i - hills[j]) * abs(i - hills[j]));
        cout << temp << ' ';
      }
    }
    cout << endl;
    ans = min(ans, temp);
  }
  return ans;
}

int main(){
  ifstream fin ("skidesign.in");
  ofstream fout ("skidesign.out");

  fin >> n;
  hills.resize(n);
  rep(i, 0, n){
    fin >> hills[i];
  }
  fin.close();
  sort(hills.begin(), hills.end());
  fout << solve() << endl;
  fout.close();

  return 0;
}