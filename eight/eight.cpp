#include <bits/stdc++.h>
#define itr(b) for(int i = 0; i < a; i++)
using namespace std;

int main() {
	long long N;
	cin >> N;
	long long x = 0, sum = 0;
	
	
	for(int i = 0; i < N; i++) {
		cin >> x;
		if(x==8) sum++;
	}
	
	cout << sum;
	
	return 0;
}

