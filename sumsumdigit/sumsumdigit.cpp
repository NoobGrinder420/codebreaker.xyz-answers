// CODE DOES NOT SOLVE TASK 4 (WORTH 0 POINTS)

#include <bits/stdc++.h>
using namespace std;

#define int long long

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
		n -= n%10;
        n /= 10;
    }
    return sum;
}

signed main() {
    int t;
    cin >> t;
    
    vector<int> queries(t);
    int max_n = 0;

    for (int i = 0; i < t; ++i) {
        cin >> queries[i];
        max_n = max(max_n, queries[i]);
    }

    vector<int> sums(max_n + 5, 0);
    
    for (int i = 1; i <= max_n; ++i) {
        sums[i] = sums[i - 1] + sum_of_digits(i);
    }

    for (int i : queries) {
        cout << sums[i] << endl;
    }

    return 0;
}
