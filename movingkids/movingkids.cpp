#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second

signed main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, l, r;
	cin >> n;

	vector<int> a(n, 0);
	for(auto &x : a) cin >> x;

	for(int i = 0; i < n; i++) {
		if(a[i] == 1) {
			l = i;
			break;
		}
	}

	for(int i = n-1; i >= 0; i--) {
		if(a[i] == 1) {
			r = i;
			break;
		}
	}

	vector<int> gaps;
	int gap = 0;

	for(int i = l; i <= r; i++) {
		if(a[i] == 0) {
			gap++;
		}
	}

	cout << gap;

	


	return 0;
}