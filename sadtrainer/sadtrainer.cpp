#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int N, K;
	cin >> N >> K;
	
	int A[N];
	for(int i = 0; i < N; i++) cin >> A[i];
	
	sort(A, A + N);
	reverse(A, A + N);
	
	cout << A[K-1];
	
	return 0;
}

