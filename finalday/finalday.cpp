#include <iostream>
#include <algorithm>
using namespace std;
// Question 3
#define int long long

signed main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int N, K, P1, P2, P3, Psum;
	cin >> N >> K;
	
	int W[N];
	int S[N];
	
	for(int i = 0; i < N; i++) {
		cin >> P1 >> P2 >> P3;
		Psum = P1 + P2 + P3;
			
		W[i] = Psum;
		S[i] = Psum;
		
	}
	
	sort(S, S + N);
	
	for(int i = 0; i < N; i++) {
		if(W[i] + 300 >= S[N-K]) cout << endl << "Yes";// << " " << W[i] << " " << W[i] + 299 << " " << S[K-1];
		else cout << endl << "No";// << " " << W[i] << " " << W[i] + 299 << " " << S[K-1];
	}
	
	return 0;
}

