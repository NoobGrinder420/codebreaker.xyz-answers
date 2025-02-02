#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	
	ll N, temp, ans = 10001;
	cin >> N;
	
	vector<ll> Psum = {0}, Pmax = {0};
	
	for(ll i = 1; i < N + 1; i++){
		cin >> temp;
		Psum.push_back(Psum[i-1] + temp);
		Pmax.push_back(max(Pmax[i-1], Psum[i]));
	}
	
	for(ll i = 1; i < N+1; i++) {
		ans = min(Psum[i]-Pmax[i-1], ans);
	}
	
	cout << ans;
	return 0;
}
// 0  1  2  3  4 5 (i)
// 0 -3 -1 -1 -1 2 (Psum Pmax)
// 0 -3 -1 -2 -1 2 (Psum)
//-3  2 -1  1  3   (nums)
