#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	ll Q, x, temp, hasZero = 0;
	deque<ll> n;

	cin >> Q;
	
	for(ll j = 0; j < Q; j++) {
		cin >> temp;

		switch(temp) {
			case 1:
				cin >> x;
				n.push_back(x);
				if(x == 0) hasZero++;
				break;
			case 2:
				x = n[n.size()-1];
				n.pop_back();
				if(x == 0) hasZero--;
				break;
			case 3:
				cin >> x;
				n.push_front(x);
				if(x == 0) hasZero++;
				break;
			case 4:
				x = n[0];
				n.pop_front();
				if(x == 0) hasZero--;
				break;
			case 5:
				if(hasZero > 0) cout << 0 << endl;
				else cout << 1 << endl;
				break;
		}
		//cout << hasZero << endl;
		//for(ll i : n) cout << i << " ";
		//cout << endl;
	}

	return 0;
}