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
	int N, M, a, b, res = 0ll;
	cin >> N >> M;

	vector<int> adjlist[N+1];

	for(int i = 0; i < M; i++) {
		cin >> a >> b;
		adjlist[b].push_back(a);
		adjlist[a].push_back(b);
	}

	for(int i = 1; i <= N; i++) {
		// cout << i << "  ";
		// for(int n : adjlist[i]) cout << n << " "; cout << endl; 
		res = max(res, (int) adjlist[i].size());
	}

	cout << res;
	
	return 0;
}
