/*
ID: samuelh3
TASK: wormhole
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

#define MAX_N 12

int N, X[MAX_N+1], Y[MAX_N+1];
int partner[MAX_N+1];
int nextOnRight[MAX_N+1];

bool cycleExists(){
  for (int start=1; start<=N; start++){
    int pos = start;
    for (int count=0; count<N; count++){
      pos = nextOnRight[partner[pos]];
    }
    if (pos != 0) return true;
  }
  return false;
}

//count solutions
int solve(void) 
{
  // find first unpaired wormhole
  int i, total=0;
  for (i=1; i<=N; i++) 
    if (partner[i] == 0) break;

  // everyone paired?
  if (i > N) {
    if (cycleExists()) return 1;
    else return 0;
  }

  // try pairing i with all possible other wormholes j
  for (int j=i+1; j<=N; j++)
    if (partner[j] == 0) {
      // try pairing i & j, let recursion continue to 
      // generate the rest of the solution
      partner[i] = j;
      partner[j] = i;
      total += solve();
      partner[i] = partner[j] = 0;
    }
  return total;
}

//fin = cin | fout = cout
int main(){
  ifstream fin ("wormhole.in");
  ofstream fout ("wormhole.out");
  fin >> N;
  for (int i=1; i <=N; i++) fin >> X[i] >> Y[i];
  fin.close();

  for (int i=1; i<=N; i++){
    for(int j=1; j<=N; j++){
      if (X[j] > X[i] && Y[i] == Y[j]){
        if (nextOnRight[i] == 0 || X[j] - X[i] < X[nextOnRight[i]] - X[i]){
          nextOnRight[i] = j;
        }
      }
    }
  }

  fout << solve() << endl;
  fout.close();

  return 0;
}