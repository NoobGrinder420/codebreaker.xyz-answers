#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    int ans = 0;
    // i and j are the 2 lengths for brute forcing
    for(int i = 1; i < x+1; i++){
        for(int j = 1; j < y+1; j++){
            // check if volume is divisible by i * j (i.e. 3rd length is possible)
            if(k % (i*j) != 0 or k / (i*j) > z) continue;
            ans = max(ans, (x-i+1) * (y-j+1) * (z - (k / (i*j))+1));
        }
    }
    cout << ans;
}

