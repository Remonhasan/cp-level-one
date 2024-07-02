// Problem : https://codeforces.com/problemset/problem/1030/A 
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

void isHard (int n)
{
  vi a(n);
  brain cin >> a[i];

  int count = 0;
  brain{
    if(a[i] == 1) count++;
  }

  cout << (count >= 1 ? "HARD" : "EASY") << nl;
  
}

signed main() {
  ios;
  int n; cin >> n;
  isHard(n); 

  return 0;
}