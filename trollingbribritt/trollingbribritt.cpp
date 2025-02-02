#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll Q, x, i, temp;
	deque<ll> n;

	cin >> Q;
	
	for(ll j = 0; j < Q; j++) {
		cin >> temp;

		switch(temp) {
			case 1:
				cin >> x;
				n.push_back(x);
				break;
			case 2:
				if(n.size() > 0) n.pop_front();
				break;
			case 3:
				cin >> i;
				if(i <= n.size()) cout << n[i-1] << endl;
				else cout << -1 << endl;
				break;
		}
		//for(ll i : n) cout << i << " ";
		//cout << endl;
	}

	return 0;
}