#include <bits/stdc++.h>
using namespace std;
#define int long long
#define p_q priority_queue
#define ve vector

struct ComparePairs {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second;  
		}
        return a.first > b.first;  
	}
};

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N, K, a, b, res = 0;
    cin >> N >> K;

    p_q<pair<int, int>, vector<pair<int, int>>, ComparePairs> pq;

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        pq.push({a, b});
    }

    for (int x = 0; x < K; x++) {
        pair<int, int> top = pq.top();
        pq.pop();

        res += top.first;

        pq.push({top.first + top.second, top.second});
    }

    cout << res << endl;

    return 0;
}
