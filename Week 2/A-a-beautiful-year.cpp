// Problem : https://codeforces.com/problemset/problem/271/A
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
	int y; cin >> y;
    y++;
    while(true){
        string year = to_string(y);
        set<char> s;
        bool isDistinct = true;
        for(auto &i : year){
            if(s.count(i)){
                isDistinct = false;
                break;
            }
            s.insert(i);
        }
        if(isDistinct){
            cout << y << nl;
            return;
        }
        y++;
    }
}

int main() {

	ios;
	solve();

	return 0;
}
