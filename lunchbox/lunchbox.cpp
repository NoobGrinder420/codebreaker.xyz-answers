#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N, m;
  cin >> N >> m;

  int k[m];
  int K = 0;

  int numLost = 0;

  for(int i = 0; i < m; i++) {
    cin >> k[i];
    K+=k[i];
  }

  int n = sizeof(k)/sizeof(k[0]); 

  sort(k, k + n); 
  reverse(k, k + n);

  for(int Ki : k) {
    if(K <= N) {
      cout << m - numLost;
      return 0;
    }

    K -= Ki;
    numLost++;
  }

  cout << m - numLost;
  return 0;
}