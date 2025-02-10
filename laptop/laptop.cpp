#include <bits/stdc++.h>
#include <cstdint>
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

    int N, M, T, C, minPapple = (int) 1e15+5, normMin = (int) 1e15+1;
    bool papplePresent = false, anyPresent = false;
    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        cin >> T >> C;

        switch(T) {
            case 0:
                if(C <= M) {
                    normMin = min(normMin, C);
                    anyPresent = true;
                }

                break;

            case 1: 
                if(C <= M) {
                    minPapple = min(minPapple, C);
                    papplePresent = true;
                    anyPresent = true;
                }

                break;
        }
    }

    if(anyPresent) cout << "Pan will buy a laptop " << (papplePresent ? "made by" : "not made by") << " Papple that will cost him " << (papplePresent ? minPapple : normMin) << ".";
    else cout << "NA";

    return 0;
}