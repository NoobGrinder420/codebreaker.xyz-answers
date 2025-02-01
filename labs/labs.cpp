#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(),a.end()
#define one first
#define two second
#define p_q priority_queue
#define ve vector
#define u_map unordered_map
#define u_set unordered_set

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int q, t1, j;
	string s;	
	cin >> q;

	u_map<int, u_set<string>> mp;
	u_map<string, int> assLabs;

	for(int i = 0; i < q; i++) {
		cin >> t1;
		
		switch(t1) {
			case 1:
				cin >> s >> j;

				mp[assLabs[s]].erase(s);
				assLabs[s] = j;
				mp[j].insert(s);
			
				break;

			case 2:
				cin >> j;
				cout << mp[j].size() << endl;
				break;

		}

		// for(auto [key, val]: mp) {
		// 	cout << "(" << key << ", [";
		// 	for(string i : val) cout << i << ", ";
		// 	cout << "]), ";
		// }
		// cout << endl;
		// for(auto [key, val]: assLabs) cout << "(" << key << ", " << val << "), ";
		// cout << endl;

	}

	return 0;
}