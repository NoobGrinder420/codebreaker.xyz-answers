#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	ll N, Q, temp;
	cin >> N >> Q;
	
	vector<ll> Psum = {0};
	//vector<ll> Psum; Psum.push_back(0);
    for(ll i = 1; i <= N; i++) {
        cin >> temp;
        Psum.push_back(temp + Psum[i-1]);
    } 
    
    //cout << endl; for(ll i : Psum) cout << i << " ";
    
    ll l, r;
    for(ll i = 0; i < Q; i++) {
        cin >> l >> r;
        cout << endl << Psum[r-1+1] - Psum[l-1];
    }
	
	return 0;
}

