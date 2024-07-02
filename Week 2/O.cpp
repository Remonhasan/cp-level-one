/* Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
Time complexity O(2^N), which is inefficient, especially for larger values of 
N. This inefficiency causes your program to exceed time limits for larger test cases, 
such as 𝑁=44.

Memoization:
To optimize the Fibonacci calculation, especially for competitive programming or 
scenarios where efficiency is crucial, you can use memoization. Memoization is a 
technique where you store the results of expensive function calls and reuse them 
when the same inputs occur again. This can drastically improve performance by reducing 
redundant calculations.
*/
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map<long long int, long long int> memo;

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



lli fibonacci(int n)
{
    if (n <= 0) return 0; 
    if (n == 1) return 0;
    if (n == 2) return 1;

  // Check if result for 'n' is already computed and stored in memo
  if (memo.find(n) != memo.end()) {
      return memo[n];
  }
  
  // Recursive case: fib(N) = fib(N-1) + fib(N-2)
  lli result = fibonacci(n-1) + fibonacci(n-2);
  
  // Memoize the result for future use
  memo[n] = result;
  
  return result;
}

signed main() {
  ios;
  int n; cin >> n;
  lli result = fibonacci(n);
  cout << result << nl;
  
  return 0;
}