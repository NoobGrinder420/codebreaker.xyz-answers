#include <iostream>
using namespace std;

int main() {
	int N , K;
  cin >> N >> K;

  int trees[N];

  for(int i = 0; i < N; i++) cin >> trees[i];

  int currSum;
  int maxSum = 0;

  for (int i = 0; i < N - K + 1; i++) {
    currSum = 0;
    for (int j = 0; j < K; j++) {
      currSum += trees[i+j];
    }

      maxSum = max(maxSum, currSum);
  }

  cout << maxSum << endl;
  return 0;
}