// Problem : https://atcoder.jp/contests/abc258/tasks/abc258_a
#include<bits/stdc++.h>
#include <iomanip>
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
	int k; cin >> k;
	int hour = k / 60 ;
	int min = k % 60;
	cout << 21 + hour << ":" << setw(2) << setfill('0') << min;
}

int main() {

	ios;
	solve();

	return 0;
}
