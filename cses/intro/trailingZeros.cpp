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

int findTrailingZeros(int n) 
{ 
    // Initialize result 
    int count = 0; 
  
    // Keep dividing n by powers of  
    // 5 and update count 
    for (int i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
  
    return count; 
} 
  
// Driver Code 
int main() 
{ 
    int n;
    cin >> n;
    cout << findTrailingZeros(n); 
    return 0; 
} 