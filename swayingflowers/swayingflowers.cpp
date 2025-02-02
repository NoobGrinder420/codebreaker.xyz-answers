#include <bits/stdc++.h>
using namespace std;

int main() {
	#define int long long
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N, T, res = 0;
    cin >> N >> T;
    
    for(int i = 1; i <= N; i++) {
		res += (int) floor(T/i);
	} cout << res;

    
    return 0;
}
