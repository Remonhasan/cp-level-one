// Problem : https://codeforces.com/problemset/problem/1512/A
#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n; 
  scanf("%d",&n);

  vector<int> a(n);
  for(int i=0; i<n; i++) scanf("%d", &a[i]);

  vector<int> v = a;
  sort(a.begin(),a.end());

  for(int i=0;i<n;i++){
    if(v[i] != a[1]){
        printf("%d\n", i + 1);
        break;
    }
  }
  

}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  int t; 
  scanf("%d",&t);

  for(int cs=1; cs<=t; cs++){
    solve();
  }
  
  return 0;
}