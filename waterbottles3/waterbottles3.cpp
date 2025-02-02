#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int N, Q, X, Aj, Bj, sum = 0;
	cin >> N >> Q >> X;
	
	vector<int> W(N);
	for(int i = 0; i < N; i++) {
		cin >> W[i];
		if(W[i] < X) sum += X - W[i];
	}
	
	for(int i = 0; i < Q; i++) {
		//cout << endl << endl << i;
		cin >> Aj >> Bj;
		if(W[Aj-1] < X) sum -= X - W[Aj-1];
		
		if(Bj < X) sum += X - Bj;
		
		W[Aj-1] = Bj;
		
		
		cout << endl << sum;	
		
	}
	
	return 0;
}

