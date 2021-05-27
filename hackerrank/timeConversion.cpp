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
    char t[10];
    rep(i, 0, 10){
        cin >> t[i];
        //cout << t[i] << ' ';
    }
    //cout << endl;
    if (t[0] == '1' && t[1] == '2' && t[8] == 'P'){
        int a;
    }
    else if (t[8] == 'P'){
        //cout << 'i' << endl;
        int temp = (((int) t[0] - '0') * 10 + (int) (t[1]) - '0') + 12;
        //cout << ((int) t[0] - '0') * 10 << ' ' << (int) t[1] - '0' << endl;
        //cout << temp << endl;
        t[0] = (char) temp/10 + '0';
        t[1] = (char) temp%10 + '0';
        //cout << t[0] << ' ' << t[1] << endl;
    }
    else if(t[8] == 'A' && t[0] == '1' & t[1] == '2'){
        t[0] = '0';
        t[1] = '0';
    }
    rep(i, 0, 8){
        cout << t[i];
    }
    return 0;
}