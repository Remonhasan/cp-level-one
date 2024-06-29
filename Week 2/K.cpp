#include<bits/stdc++.h>
#include <cctype>
using namespace std;
 
using ll = long long;
using lli = long long int;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
  int n; cin >> n;
  vi divisors;
  for(int i=1;i<=n/2;i++){
    if(n % i == 0) divisors.pb(i);
  }
  divisors.pb(n);
  for(auto i : divisors) cout << i << nl;
 
  return 0;
}