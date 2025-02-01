#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	long long A, B, C, D, E, m;
	m = (long long)(pow(10, 9) + 9); 
	cin >> A >> B >> C >> D >> E;
	
	A%=m; B%=m; C%=m; D%=m; E%=m;

	cout << (((((A*B)%m)*((C*D)%m)%m)*E)%m)%m;
	
	return 0;
}

