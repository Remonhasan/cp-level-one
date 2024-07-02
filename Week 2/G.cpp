// Problem : https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
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

int operations ()
{
  int n; cin >> n; vi a(n);
  brain cin >> a[i];

  int evenCount = 0, oddCount = 0;
  brain{
    if(a[i] % 2 == 0) evenCount++;
    else oddCount++;
  }

  int d = abs(evenCount - oddCount);
  
  if(evenCount == oddCount){
    cout << 0 << nl;
  }else if(d % 2 != 0){
    cout << -1 << nl;
  }else{
    cout << d / 2 << nl;
  } 
}

signed main() {
  ios;
  int t; cin >> t;
  while(t--){
    operations(); 
  }

  return 0;
}