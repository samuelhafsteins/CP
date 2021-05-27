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

set<string> out;

void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        out.insert(a);  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  

            // Swapping done  
            swap(a[l], a[i]);  

            // Recursion called  
            permute(a, l+1, r);  

            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}

int main()  
{  
    string str;
    cin >> str;
    int n = str.size();  
    permute(str, 0, n-1);
    cout << out.size() << endl;
    for (auto i = out.begin(); i != out.end(); i++)
      cout << *i << endl;
    return 0;  
}