#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second
#define p_q priority_queue
#define ve vector
#define u_map unordered_map

signed main() {
	int N, t2, C, sum = 0;
	cin >> N;

	u_map<string, int> mp;
	string t1;

	for(int i = 0; i < N; i++) {
		cin >> t1 >> t2;
		mp[t1] = t2;
		// cout << mp[t1] << endl;
	}

	cin >> C;

	for(int i = 0; i < C; i++) {
		cin >> t1;
		sum += mp[t1];
	}

	cout << sum/C;

	return 0;
}