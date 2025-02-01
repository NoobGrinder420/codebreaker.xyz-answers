#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second
#define p_q priority_queue
#define u_map unordered_map
#define u_set unordered_set
#define DP(n, x) vector<int> dp(n, x)

signed main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N;
	cin >> N;
	
	vector<int> nums(N);
	for(int &x:nums) cin >> x;
	
	DP(N, 1);
	
	for(int i = N-1; i > -1; i--) {
		for(int j = i+1; j < N; j++) {
			if(nums[i] < nums[j]) {
				dp[i] = max(dp[i], dp[j]+1);
				
			}
		}
	}
	
	cout << *max_element(all(dp));
	
	return 0;
}
