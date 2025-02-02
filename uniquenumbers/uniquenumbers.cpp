#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
	#define int long long
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N;
    cin >> N;
    unordered_set<string> uniqueNumbers;

    for (int i = 0; i < N; i++) {
        string num;
        cin >> num;
        uniqueNumbers.insert(num);
    }

    cout << uniqueNumbers.size() << endl;

    return 0;
}
