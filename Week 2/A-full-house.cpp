// Problem : https://atcoder.jp/contests/abc263/tasks/abc263_a
#include<bits/stdc++.h>
#include <map>
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
	int a, n = 5;
	map<int, int> freq;

	brain{
		cin >> a;
		freq[a]++;
	}

	bool fullHouse = false;
    for (auto& entry : freq) {
        if (entry.second == 3) {
            for (auto& other_entry : freq) {
                if (other_entry.second == 2 && entry.first != other_entry.first) {
                    fullHouse = true;
                    break;
                }
            }
            break;
        }
    }
    
    cout << (fullHouse ? "Yes" : "No") << nl;
}

int main() {

	ios;
	solve();

	return 0;
}
