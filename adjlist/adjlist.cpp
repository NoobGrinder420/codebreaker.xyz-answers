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
	cin >> n>> e;

	vector<int> adjlist[n+1];
	
	for(int i = 0; i < e; i++) {
		cin >> a >> b;
		adjlist[a].push_back(b);
		adjlist[b].push_back(a);

	}

	for(int i=1;i<=n;i++){
		for(int j=0;j<adjlist[i].size();j++){
			cout<<adjlist[i][j]<<" ";
		}
		cout << '\n';
	}
}