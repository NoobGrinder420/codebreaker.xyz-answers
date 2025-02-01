#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
  
    int N, ans = 0;
    cin >> N;
    
    int A[N], B[N];
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    
    vector<pair<int, int>> alice_pairs;
    
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            alice_pairs.push_back({A[i], A[j]});
        }
    }
    
    for (int k = 0; k < N; k++) {
        for (int p = k + 1; p < N; p++) {
            for (auto pair : alice_pairs) {
                if (pair.first == B[k] && pair.second == B[p]) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}
