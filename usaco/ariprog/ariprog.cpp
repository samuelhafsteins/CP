/*
ID: samuelh3
TASK: ariprog
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
bool a[126000] = {0};
  int b[40000] = {0};
  int diff[40000] = {0};
  vii S;
  int N, M;

bool check(int n, int m){
  rep(i, 0, N){
    if(n+i*m > 2*M*M || a[n+i*m] == false)
      return false;
  }
  return true;
}

int main(){
  ifstream fin ("ariprog.in");
  ofstream fout ("ariprog.out");
  fin >> N >> M;
  cout << N << M;
  rep(i, 0, M+1){
    rep(j, i, M+1){
      if(a[i*i + j*j] == false)
        a[i*i + j*j] = true;
      //cout << a[i*i + j*j] << endl;
    }
  }

  int mxNum = 2*M*M;

  int len = 0;
  rep(i, 0, mxNum+1){
    if(a[i] == true){
      //cout << "ye" << endl;
      b[len] = i;
      len++;
    }
  }

  rep(i, 1, len){
    diff[i-1] = b[i] - b[i-1];
  }

  int largestDiff = 0;
  rep(i,0,len-N){
    int n = b[i];
    int m = 0;
    rep(j,i,len-N+1){
      m += diff[j];
      if (check(n, m)){
        ii temp;
        temp.first = n;
        temp.second = m;
        if(m > largestDiff)
          largestDiff = m;
        S.push_back(temp);
      }
    }
  }

  if (S.size() == 0){
    fout << "NONE" << endl;
    return 0;
  }

  rep(i, 1, largestDiff+1){
    for(size_t j=0; j<S.size(); j++){
      if(S[j].second == i){
        fout << S[j].first << ' ' << S[j].second << endl;
        S.erase(S.begin() + j);
        j--;
      }
    }
  }
  return 0;
}