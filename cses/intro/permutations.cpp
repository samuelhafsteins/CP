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
const int INF = ~(1<<31);

const double EPS = 1e-9;
const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) {
  return (a % b + b) % b; }

int main() {
    int n;
    cin >> n;
    if (n == 1) cout << 1 << endl;
    else if (n <= 3) cout << "NO SOLUTION" << endl;
    else{
        for(int i = (n & 1) ? n : n - 1; i > 0; i -= 2){
            cout << i << ' ';
        }
        for(int i = (n & 1) ? n - 1 : n; i > 0; i -= 2){
            cout << i << ' ';
        }
    }
    return 0;
}