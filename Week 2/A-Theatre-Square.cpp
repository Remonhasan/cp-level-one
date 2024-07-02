// Problem : https://codeforces.com/problemset/problem/630/A
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

ll flagstonesNeed(ll n, ll m, ll a)
{
  return ((m+a-1)/a)*((n+a-1)/a);

}

signed main() {
  ios;
  ll n, m, a; cin >> n >> m >> a;
  
  ll result = flagstonesNeed(n, m, a);
  cout << result << nl;

  return 0;
}