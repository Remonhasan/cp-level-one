#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
	int n; cin >> n; vi a(n);
	brain cin >> a[i];

	int even = 0, odd = 0, pos = 0, neg = 0;
	brain{
		if(a[i] % 2 == 0) even++;
		if(a[i] % 2 != 0) odd++;
		if(a[i] < 0) neg++;
		if(a[i] > 0) pos++;
		
	}

	cout << "Even: " << even << nl;
	cout << "Odd: " << odd << nl;
	cout << "Positive: " << pos << nl;
	cout << "Negative: " << neg << nl;
}

int main() {

	ios;
	solve();

	return 0;
}
