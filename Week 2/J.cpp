#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define vi vector < int >
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define brain for(int i=0;i<n;i++)
#define pb push_back
#define IS getline(cin, s);
#define nl "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void isPrime(int n)
{
  int flag = 0;

  for(int i=1;i<=n;i++){
    if(i == 0 || i == 1) continue;
    
    flag = 1;
    for(int j=2;j<=i/2;j++){
      if(i % j == 0){
        flag = 0;
        break;
      }
    }

    if(flag == 1) cout << i << " ";
  }
  
}

signed main() {
  ios;
  int n; cin >> n;
  isPrime(n);
  
  return 0;
}