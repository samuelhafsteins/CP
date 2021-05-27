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
    int n, sm;
    bool same = true;
    cin >> n;
    int g[n];
    rep(i, 0, n){
        cin >> g[i];
        sm += g[i];
        if (g[0] != g[i]) same = false;

    }
    if (same) cout << 0 << endl;
    else if (n == 2) cout << "1 \n" << (g[0] > g[1] ? 1 : 2) << ' ' << (g[0] > g[1] ? 2 : 1) << endl;
    else if (n == 3) {
        int mxi, mni, midi;
        mxi = max_element(g, g+n) - g, mni = min_element(g, g+n) - g;
        rep(i, 0, n) if(i != mxi && i != mni) midi = i;
        if (2*g[midi] == g[mxi] + g[mni]){
            cout << 1 << endl;
            cout << mxi + 1 << ' ' << mni + 1 << endl;
        }
        else cout << -1 << endl;
    }
    else if (n == 4){
        vii arr(n);
        rep(i, 0, n) arr[i] = {g[i], i + 1};
        sort(arr.begin(), arr.end());
        if (arr[0].first == arr[1].first && arr[2].first == arr[3].first){
            cout << 2 << endl;
            cout << arr[3].second << " " << arr[1].second << endl;
            cout << arr[2].second << " " << arr[0].second << endl;
        }
        else{
            cout << 4 << endl;
            cout << arr[3].second << " " << arr[2].second << endl;
            cout << arr[1].second << " " << arr[0].second << endl;
            cout << arr[3].second << " " << arr[1].second << endl;
            cout << arr[2].second << " " << arr[0].second << endl;
        }
    }
    else cout << -1 << endl;
    return 0;
}