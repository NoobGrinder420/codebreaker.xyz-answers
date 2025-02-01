#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        if (A[i] % 2 != 0) {
            cout << "NO" << endl;
            return 0;
        }

        if (i < N - 1) {
            A[i + 1] += A[i] / 2; 
        }
        A[i] = 0;
    }

    cout << "YES" << endl;
    return 0;
}
