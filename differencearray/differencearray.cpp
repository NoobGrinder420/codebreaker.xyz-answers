#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	ll N, U, start, prev, temp;
	cin >> N >> U;
	
	//vector<ll> Psum = {0};
	vector<ll> Pdiff; Pdiff.push_back(0);
	
	cin >> start;
	prev = start;
	
    for(ll i = 1; i < N; i++) {
        cin >> temp;
        Pdiff.push_back(temp - prev);
        prev = temp;
    } 
    
    //cout << endl; for(ll i : Pdiff) cout << i << " ";
    
    ll l, r, v;
    for(ll i = 0; i < U; i++) {
        cin >> l >> r >> v;
        Pdiff[l-1]+=v; Pdiff[r]-=v;
        //cout << endl; for(ll j : Pdiff) cout << j << " ";
        
    }
    
    cout << endl; 
    start+=Pdiff[0];
    for(ll i = 1; i <= N; i++) {
		cout << start << " ";
		start+=Pdiff[i];
	}
	
	return 0;
}
