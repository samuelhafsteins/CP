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

int main (){
    int n, m, k;
    cin >> n >> m >> k;
    int applicants[n], appartments[m];

    rep (i, 0, n) cin >> applicants[i];
    rep (i, 0, m) cin >> appartments[i];
    
    sort(applicants, applicants+n);
    sort(appartments, appartments+m);

    int it = 0, ans = 0, i = 0;


    while (true){
        if (it >= m || i >= n) break;
        if (abs(applicants[i] - appartments[it]) > k){
            if (applicants[i] > appartments[it]){
                ++it;
            }
            else{
                ++i;
            }
        }
        else{
            ++ans;
            ++i;
            ++it;
        }
    }

    cout << ans;

}