#include <bits/stdc++.h>
#include <ios>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second

signed main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m, res;
	cin >> n >> m;
	res = m;

	vector<int> d(n, 0);
	for(auto &x : d) cin >> x;

	sort(all(d));

	for(auto &x : d){
		if(x <= m) {
			res++;
			m-=x;
		} else break;
		
	}

	cout << res;

	return 0;
}