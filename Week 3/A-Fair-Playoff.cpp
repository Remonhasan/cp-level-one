// Problem: https://codeforces.com/problemset/problem/1535/A
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define lli long long int
#define vi vector < int >
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define brain for(int i=0;i<n;i++)
#define pb push_back
#define IS getline(cin, s);
#define nl "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
  int s1,s2,s3,s4; cin >> s1 >> s2 >> s3 >> s4;
  if((min(s1,s2) > max(s3,s4)) || (min(s3,s4) > max(s1,s2))){
    cout << "NO" << nl;
  }else{
    cout << "YES" << nl;
  }
}

signed main() {
  ios;
  int t;
  cin >> t;
  
  while (t--) {
    solve();
  }

  return 0;
}