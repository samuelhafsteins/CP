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

int * MaxIncreasingSub(int arr[], int n, int k)
{
    int dp[n][k + 1], ans = -1;

    memset(dp, -1, sizeof(dp));
 
    for (int i = 0; i < n; i++) {
        dp[i][1] = arr[i];
    }
 
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                for (int l = 1; l <= k - 1; l++) {
                    if (dp[j][l] != -1) {
                        dp[i][l + 1] = max(dp[i][l + 1],
                                          dp[j][l] + arr[i]);
                    }
                }
            }
        }
    }

    int ret[k];
    rep(j, 0, k){
      for (int i = 0; i < n; i++) {
          if (ans < dp[i][j])
              ans = dp[i][j];
      }
      ret[j] = ans;
    }

    return ret;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    int a[n];
    cin >> n >> k;
    rep(i,0,n){
      cin >> a[i];
    }
    int *arr = MaxIncreasingSub(a, n, k);
    rep(i, 0, k){
      cout << *(arr + i) << endl;
    }
  }
  return 0;
}