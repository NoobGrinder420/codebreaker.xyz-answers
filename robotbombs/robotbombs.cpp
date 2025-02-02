#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(), a.end()
#define p_q priority_queue

signed main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N, res = 0, maxl, maxr;
	cin >> N;

	string S;
	cin >> S;

	int i = 0;
	while(i < N) {
		//cout << i << endl;
		maxl = 0; maxr = 0;

		while(S[i] != 'U') {
			if(i >= N) break;
			if(S[i] == 'R') maxr++;
			else maxl++;
			i++;
		} res++;

		res += max(maxl, maxr);
		i++;
	}

	if(S[N-1] == 'U') res++;

	cout << res;
	
	return 0;
}

