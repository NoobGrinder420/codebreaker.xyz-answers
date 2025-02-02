#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int Q, temp, temp2, z;
    cin >> Q;

    deque<int> nums;
    for(int i = 0; i < Q; i++) {
        cin >> temp;
        switch(temp) {
            case 1:
                cin >> temp2;
                nums.push_back(temp2);
                break;

            case 2:
                nums.pop_back();
                break;

            case 3:
                cout << nums.front() << endl;
                nums.pop_front();
                break;

        }
        
    }

    return 0;
}
