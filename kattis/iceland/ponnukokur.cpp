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
    int n, q;
    cin >> n >> q;
    int pc[n], preSum[n + 1];

    rep(_, 0, q){
        int inp;
        cin >> inp;
        if (inp == 1){
            // 1 flip
            int flip;
            cin >> flip;
        }
        else if (inp == 2){
            // all flip
        }
        else if(inp == 3){
            // ask how many up
        }
        else{
            // ask range
            int l, r;
            cin >> l >> r;
        }
    }
    return 0;
}