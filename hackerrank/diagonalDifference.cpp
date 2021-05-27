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

int main(){
    int n, sm1 = 0, sm2 = 0;
    cin >> n;
    int arr[n][n];
    rep(i, 0, n){
        rep(j, 0, n){
            cin >> arr[i][j];
        }
    }
    rep(i, 0, n){
        rep(j, 0, n){
            if (i == j) {
                sm1+=arr[i][j];
                sm2+=arr[i][n-1-j];
            }
        }
    }
    cout << abs(sm1-sm2) << endl;
}