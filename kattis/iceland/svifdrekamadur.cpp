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

int arraySortedOrNot(int arr[], int n) 
{ 
    // Array has one or no element or the 
    // rest are already checked and approved. 
    if (n == 1 || n == 0) 
        return 1; 
  
    // Unsorted pair found (Equal values allowed) 
    if (arr[n - 1] < arr[n - 2]) 
        return 0; 
  
    // Last pair was sorted 
    // Keep on checking 
    return arraySortedOrNot(arr, n - 1); 
} 

int main() {
    int n;
    cin >> n;
    int arr[n];
    rep(i, 0, n) cin >> arr[i];
    if (n == 1) {
      cout << 0 << endl;
      return 0;
    }
    return 0;
}