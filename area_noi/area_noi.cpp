#include <bits/stdc++.h>
using namespace std;

int main() {
	#define int long long
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n, temp_h, temp_w, ans = -1;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> temp_h >> temp_w;
		ans = max(ans, (temp_h*temp_w));
	} 
	cout << ans;
		
	return 0;
}
