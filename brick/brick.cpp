#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second
#define p_q priority_queue
#define u_map unordered_map
#define u_set unordered_set

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N, prev = -1;
    cin >> N;

    vector<int> A(N, 0), res;
    for(auto &x: A) cin >> x;

    reverse(all(A));

    for(int i = 0; i < N; i++) {
        if(A[i] > prev) {
            res.push_back(A[i]);
            prev = A[i];

        }

    }

    for(int i : res) cout << i << endl;

    return 0;
}