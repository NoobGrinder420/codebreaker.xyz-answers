#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second
#define p_q priority_queue
#define u_map unordered_map
#define u_set unordered_set

signed main(){
    int n, e, a, b;
	cin >> n >> e;

	int adjlist[n+1][n+1];

	for(int j = 0; j < n+1; j++) {
		for(int i = 0; i < n+1; i++) {
			adjlist[j][i] = 0;
		}
	}
	
	for(int i = 0; i < e; i++) {
		cin >> a >> b;
		adjlist[a][b] = 1;
		adjlist[b][a] = 1;

	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<< adjlist[i][j];
		}
		cout << endl;
	}
}
