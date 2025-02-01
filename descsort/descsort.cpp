#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	long long N;
	cin >> N;
	long long nums [N];
	
	for(int i = 0; i < N; i++) cin >> nums[i];
	
	sort(nums, nums + N);
	reverse(nums, nums + N);
	
	for(int i : nums) cout << i << " ";
	
	return 0;
}

