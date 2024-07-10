#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve()
{
    string s; 
    cin >> s;
 
	for(ll i=0; i<s.length(); i++){
	    if(s[i] == 'A' && s[i+1] == 'B'){
	        s.erase(s.begin()+i+1);
	        s.erase(s.begin()+i);
	        i -= 2;
	    }
	    else if(s[i] == 'B' && s[i+1] == 'B'){
	        s.erase(s.begin()+i+1);
	        s.erase(s.begin()+i);
	        i -= 2;
	    }
	}
  
  	cout << s.length() << "\n";
}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  ll t; cin >> t;
  while(t--){
  	solve();
  }
  
  return 0;
}