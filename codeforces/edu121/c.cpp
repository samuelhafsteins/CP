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

struct Interval 
{ 
    ll s, e; 
}; 

bool mycomp(Interval a, Interval b) 
{ return a.s < b.s; } 

ll mergeIntervals(Interval arr[], ll n) 
{ 
    sort(arr, arr+n, mycomp); 

    ll index = 0;

    for (ll i=1; i<n; i++) 
    { 
        if (arr[index].e >=  arr[i].s) 
        { 
            arr[index].e = max(arr[index].e, arr[i].e); 
        } 
        else {
            index++;
            arr[index] = arr[i]; 
        }    
    } 

    ll sm = 0;
    for (ll i = 0; i <= index; i++){
      ll temp = arr[i].e - arr[i].s + 1;
      sm += (temp * (temp + 1))/2;
    }
    return sm;
} 

int main() 
{
  ll t, n;
  cin >> t;
  while(t--){
    cin >> n;
    Interval arr[n];
    ll k[n], h[n];
    rep(i, 0, n){
      cin >> k[i];
    }
    rep(i, 0, n){
      cin >> h[i];
      arr[i] = {k[i] - h[i] + 1, k[i]};
    }
    cout << mergeIntervals(arr, n) << endl; 
  }
  return 0; 
} 