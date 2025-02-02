#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int N, Q, temp, l, r, a, b;
	cin >> N >> Q;
	
	vector<int> Psum(N+1, 0);
	for(int i = 1; i < N+1; i++) {
	  cin >> temp;
	  Psum[i] = Psum[i-1]+temp;
	}
	
	//for(int i : Psum) cout << i << " ";
	//cout << endl;
	
  for(int i = 0; i < Q; i++) {
    cin >> l >> r;
    a = (Psum[l%N]) + Psum[N]*((l - l%N)/N);
    b = (Psum[r%N +1]) + Psum[N]*((r - r%N)/N);
    //cout << a << " " << b << " ";
    cout << b - a << endl;
    
  }

	

	return 0;
}

