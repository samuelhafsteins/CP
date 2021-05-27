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

int main(){
  int n;
  cin >> n;
  vii pairs(n);
  vi shirts(n);
  rep(i, 0, n) cin >> pairs[i].fs >> pairs[i].sc;
  rep(i, 0, n) cin >> shirts[i];
  sort(pairs.begin(), pairs.end());
  sort(shirts.begin(), shirts.end());
  rep(i, 0, n){
    if(shirts[i] >= pairs[i].fs && shirts[i] <= pairs[i].sc){
      cout << "Jebb" << endl;
    }
    else cout << "Neibb";
  }
  //cout << "Jebb" << endl;
  return 0;
}