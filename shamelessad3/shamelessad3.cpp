#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
  int n; cin >> n; vector<int> heights; heights.resize(n);
  for(int i = 0; i < n; i++) cin >> heights[i];

	vector<int> pse(n,-1),nse(n,-1);
	stack<int> s1,s2;

	for(int i=0;i<n;i++){
		while(!s1.empty() && heights[s1.top()]>=heights[i]){
			s1.pop();
		}

		if(s1.empty()) pse[i]=-1;
		else pse[i]=s1.top();

		s1.push(i);
	}


	for(int i=n-1;i>=0;i--){
		while(!s2.empty() && heights[s2.top()]>heights[i]){
			s2.pop();
		}
		if(s2.empty()) nse[i]=n;
		else nse[i]=s2.top();
		s2.push(i);
	}


	int maxi=0;
	for(int i=0;i<n;i++){
		maxi=max(maxi,((nse[i]-pse[i]-1)*heights[i]));
	}
  
  cout << maxi;
}