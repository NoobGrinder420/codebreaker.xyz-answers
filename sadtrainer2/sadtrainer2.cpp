#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
  
    int N, Q, q;
    cin >> N >> Q;
    
    int nums[N];
    for(int i = 0; i < N; i++) cin >> nums[i];
    
    sort(nums, nums + N);
    
    for(int i = 0; i < Q; i++) {
      cin >> q;
      
      if(*lower_bound(nums, nums+N, q) == q) cout << "Yes" << endl;
      else cout << "No" << endl;
      
    }
    
    return 0;
}