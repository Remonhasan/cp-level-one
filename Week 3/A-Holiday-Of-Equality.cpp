// Problem : https://codeforces.com/problemset/problem/758/A
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n; 
  scanf("%d",&n);

  vector<int> a(n);
  for(int i=0; i<n; i++) scanf("%d", &a[i]);

  sort(a.begin(),a.end());
  int sum = 0;
  for(int i=0;i<n;i++){
  	sum += a[n-1] - a[i];
  }

  printf("%d\n", sum);
}

signed main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  solve();
  

  return 0;
}