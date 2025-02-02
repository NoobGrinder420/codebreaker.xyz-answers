#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, D;
	cin >> N >> D;
	
	int M[N];
	for(int i = 0; i < N; i++) cin >> M[i];
	
	int maxMass = 0;
	
	sort(M, M + N);
	reverse(M, M + N);
	
	for(int i = 0; i < D; i++) maxMass+= M[i];
	
	cout << maxMass;
	
	return 0;
}

