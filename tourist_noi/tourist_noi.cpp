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

    int n, x, y, res = 0;
    cin >> n >> x >> y;

    vector<int> a(n, 0);
    for(auto &i : a) cin >> i;

    for(int i = 0; i < n; i++) {
        res += min(x*a[i], y);

    }

    cout << res;


    return 0;
}