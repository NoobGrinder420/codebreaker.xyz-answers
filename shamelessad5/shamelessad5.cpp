#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second
#define p_q priority_queue
#define u_map unordered_map
#define u_set unordered_set

signed main(){
    int N, mod = pow(10, 9)+7, res = 0;
	cin >> N;

	vector<int> nums(N, 0);
	for(int &x:nums) cin >> x;

	vector<int> dp(N, 1);

	for(int i = N-1; i > -1; i--) {
		for(int j = i+1; j < N; j++) {
			//cout << i << ' ' << j << endl;
			if((nums[i]+nums[j])%2==1 && nums[i] < nums[j]) {
				//for(int i : dp) cout << i << ' '; cout << endl;
				dp[i]+=dp[j];
				dp[i]%=mod;

			}

		}
	}

	for(int i : dp) {
		res+=i;
		res%=mod;
	}
	cout << res%mod;

	return 0;
}
