#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(), a.end()

signed main() {
	int N, parity = 0;
	cin >> N;

	deque<int> nums;

	int arr[N];
	for(auto &x:arr) cin >> x;

	for(int i = 0; i < N; i++) {
		if(parity % 2 == 0) {
			nums.push_back(arr[i]);

		} else {
			nums.push_front(arr[i]);

		}

		parity++;

	}

	if(N%2==1) reverse(all(nums));

	for(int i : nums) cout << i << " ";

	return 0;
}
