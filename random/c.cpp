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

int n;
string res;

int finish(int a, int b) {
  cout << '?' << ' ' << a << ' ' << n << flush;
  cin >> res;
  if (res == "equal"){
    return b;
  }
  return a;
}

int main(){
  cin >> n;

  int ans = 0;

  for (int i = 1; i < n - 1; i += 2){
    cout << '?' << ' ' << i << ' ' << i + 1 << flush;
    cin >> res;
    if (res != "equal") {
      ans = finish(i, i + 1);
      break;
    }
  }

  if (!ans) {
    ans = n;
    cout << '?' << ' ' << 1 << ' ' << n << flush;
    cin >> res;
    if (res == "equal"){
      ans = n - 1;
    }
  }

  cout << '!' << ' ' << ans << flush;

  return 0;
}