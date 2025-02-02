#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second
#define p_q priority_queue
#define u_map unordered_map
#define u_set unordered_set

signed main() {
	int N, K, x, start, end;
	cin >> N >> K;

	vector<int> arr(N, 1);
	for(int i = 0; i < K; i++) {
		cin >> x;
		arr[x-1] = -1;
	}

	//for(int i : arr) cout << arr[i] << " "; cout << endl;

	cout << max(N-K-1, 0ll) << endl;
	if(max(N-K-1, 0ll) == 0ll) return 0;

	for(int i = 0; i < N; i++) {
		if(arr[i] == 1) {
			start = i;
			cout << i+1;
			break;
		}
	}

	for(int i = N-1; i >= 0; i--) {
		if(arr[i] == 1) {
			end = i;
			break;
		}
	}

	for(int i = start+1; i <= end; i++) {
		if(arr[i] == 1) {
			if(i == end) {
				cout << " " << end+1;
				break;
			}
			cout << " " << i+1 << endl << i+1;
		}
	}

	
	
	
	return 0;
}
