#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(m);
	
    for(auto &x:a) cin>>x; 
    sort(a.begin(), a.end());
    
    // binary search
    while(q--){
        int x;
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);

        if(it == a.end()) cout << n - ( *(a.end()-1) ) << endl;
        else if(it == a.begin()) cout << (*it)-1 << endl;
        else cout << (*it - *--it)/2 << endl;
        
    }
}
