/*
ID: samuelh3
TASK: beads
LANG: C++14             
*/
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

//fin = cin | fout = cout
int main(){
  ifstream fin ("beads.in");
  ofstream fout ("beads.out");
  int n;
  fin >> n;
  string in;
  fin >> in;
  deque<char> neck;
  rep(i, 0, n){
    //cout << in[i];
    neck.push_back(in[i]);
  }
  char f;
  rep(i, 0, n){
    if(neck[i] != 'w') f = neck[i];
  }
  int j = 0;
  while((f == neck.back() || neck.back() == 'w') && j <= n){
    j++;
    //cerr << (f == neck.back() ? "yes" : "no") << endl;
    neck.push_front(neck.back());
    neck.pop_back();
  }
  //rep(i, 0 , n) cout << neck[i];
  //cout << endl;
  char temp = f;
  int ans = 0, a = 0, b = 0;
  while(neck.front() == temp || neck.front() == 'w') {
    a++;
    neck.pop_front();
    if(neck.empty()){
      fout << a << endl;
      return 0;
    }
  }
  char back = neck.back();
  for(int i = neck.size() - 1; i >= 0; i--){
    //cout << neck[i] << endl;
    if(neck[i] != back && neck[i] != 'w') break;
    b++;
  }
  //cout << b << endl;
  ans = a + b;
  //cout << a << endl;
  b = 0;
  temp = neck.front();
  while(!neck.empty()){
    if(neck.front() == temp || neck.front() == 'w'){
      b++;
      //cout << b << ' ' << a <<  endl;
      neck.pop_front();
    }
    else{
      temp = neck.front();
      ans = max(ans, a + b);
      a = b;
      b = 0;
    }
  }
  cout << ans << endl;
  fout << ans << endl;
  return 0;
}