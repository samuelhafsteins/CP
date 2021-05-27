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
    vi a, b;
    if (n % 4 == 0){
        cout << "YES" << endl;
        rep(i, 1, n + 1){
            if (i % 4 == 1 || i % 4 == 0) a.push_back(i);
            else b.push_back(i);
        }
        cout << a.size() << endl;
        rep(i, 0, a.size()) cout << a[i] << ' ';
        cout << endl;
        cout << b.size() << endl;
        rep(i, 0, b.size()) cout << b[i] << ' ';
    }
    else if ((n - 3) % 4 == 0){
        cout << "YES" << endl;
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        rep(i, 4, n + 1){
            if (i % 4 == 0 || i % 4 == 3) a.push_back(i);
            else b.push_back(i);
        }
        cout << a.size() << endl;
        rep(i, 0, a.size()) cout << a[i] << ' ';
        cout << endl;
        cout << b.size() << endl;
        rep(i, 0, b.size()) cout << b[i] << ' ';
    }
    else cout << "NO" << endl;
    return 0;
}