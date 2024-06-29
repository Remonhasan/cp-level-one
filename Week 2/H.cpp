#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > v;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i <= b; i++)
#define PB push_back
#define IS getline(cin, s);
#define nl "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];


bool solve(int n) {

  if(n <= 1)  return false;
  for(int i=2;i<=n/2;i++){
    if(n%i == 0) return false;
  }

  return true;
}

int main() {
  ios;
  int n; cin >> n;
  cout << (solve(n) ? "YES" : "NO") << nl;

  return 0;
}
