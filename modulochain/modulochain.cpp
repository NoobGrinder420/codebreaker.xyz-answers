#include <bits/stdc++.h>
using namespace std;

int main() {
	#define int long long
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N, m = pow(10, 9)+7;
	cin >> N;
	int nums[N];
	
	for(int i = 0; i < N; i++) cin >> nums[i];
	
	int sum=0;
	for(int i : nums) {
		sum += (i%m);
		sum%=m;
    } cout << sum << " ";
    
    int second = ((nums[0]%m)*(nums[N-1]%m))%m;
    cout << second << " ";
    
    cout << ((((2*(nums[0]%m))%m - sum)%m)+m)%m;
    

    
    return 0;
}
