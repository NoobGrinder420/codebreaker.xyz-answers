#include <iostream>
using namespace std;
#define int long long
#define all(a) a.begin(), a.end()
#define p_q priority_queue

signed main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N;
	cin >> N;

	string prev, x;
	cin >> prev;
	//x=prev;cout << x << " " << x[0] << " " << x[x.length()-1] << endl;;

	for(int i = 1; i < N; i++) {
		cin >> x;
		//cout << x << " " << x[0] << " " << x[x.length()-1] << endl;

		if(x[0]!=prev[prev.length()-1]) {
			//cout << x[0] << " " << prev[prev.length()-1] << endl;
			cout << "No";
			return 0;
		}

		prev = x;

	}

	cout << "Yes";
	return 0;
}

