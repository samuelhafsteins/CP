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
    int t;
    cin >> t;
    while (t--){
        bool pos = false;
        int n, c = 0;
        cin >> n;
        int a[n];
        rep(i, 0, n){ 
            cin >> a[i];
            if (a[i] % 2) c++;
        }
        sort(a, a+n);
        if (c % 2 == 0) cout << "YES" << endl;
        else{
            rep(i, 0, n){
                if (a[i+1] - a[i] == 1){
                    pos = true;
                    break;
                }
            }
            if (pos) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}