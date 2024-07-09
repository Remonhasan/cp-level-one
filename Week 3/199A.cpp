#include<bits/stdc++.h>
using namespace std;


void solve()
{
  int n; 
  scanf("%d",&n);

  if(n == 0) printf("0 0 0\n");
  else{
  	int a = 0, b = 1;
  	while(a+b != n){
  		int temp = b;
  		b = a + b;
  		a = temp;
  	}

  	printf("0 %d %d\n", a, b);
  }

}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  solve();
 
  return 0;
}