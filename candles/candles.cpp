#include <iostream>
using namespace std;

int main() {
  int N, K; 
	cin >> N >> K;

  long long nums[N];
  for(int i = 0; i < N; i++) cin >> nums[i];

  long long rightSum, leftSum, tempSum;
  long long minSum = 1000000000001;

  for(int i = 0; i < N - K + 1; i++) {

  
    rightSum = nums[i+K-1] - nums[i] + abs(0 - nums[i]);
    leftSum = nums[i+K-1] - nums[i] + abs(0 - nums[i+K-1]);
    tempSum = min(rightSum, leftSum);

    minSum = min(minSum, tempSum);
    //cout << "minSum:" << minSum << " tempSum:" << tempSum << " i:" << i << " K:" << K << " nums[i]:" << nums[i] << " nums[i+K-1]:" << nums[i+K-1] << " diff:" << nums[i+K-1] - nums[i] + abs(nums[i]) << endl;   
  }

  cout << minSum;

  return 0;
}