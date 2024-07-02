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

int modularExponentiation(int base, ll N, int mod)
{
  int result = 1;
  base = base % mod; // Take base modulo mod

  while( N > 0){
    // If N is odd, multiply base with result
    if (N % 2 == 1) {
        result = (result * base) % mod;
    }
    // Now N must be even, divide N by 2
    N = N >> 1; // equivalent to N /= 2
    base = (base * base) % mod; // square the base
  }

  return result;

}

signed main() {
  ios;
  ll n; cin >> n;
  int base = 5, mod = 100;

  // Compute (5^n) % 100 to get the last two digits
  int lastTwoDigits = modularExponentiation(base, n, mod);
  cout << lastTwoDigits << nl;

  return 0;
}