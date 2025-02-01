#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(),a.end()
#define one first
#define two second
#define p_q priority_queue
#define ve vector
#define u_map unordered_map
#define u_set unordered_set
#define m_set multiset

int main() {
	int N, t1, x;
	cin >> N;
	multiset<int> ms;

	for(int i = 0; i < N; i++) {
		cin >> t1 >> x;

		// cout << "in: " << t1 << ' ' << x << endl;
		
		if(t1 == 1) {
			ms.insert(x);

		} else if(t1 == 2) {
			ms.erase(ms.find(x));

		} else if(t1 == 3) {
			auto t2 = ms.lower_bound(x);
			cout << (t2 == ms.end() ? -1 : *t2) << endl;

		}

		// cout << "array: ";
		// for(auto i : ms) cout << i << ' ';
		// cout << endl;

	}

	//for(auto i : ms) cout << i;

	return 0;
}