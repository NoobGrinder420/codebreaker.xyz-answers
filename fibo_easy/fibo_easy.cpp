#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int N, temp;
  cin >> N;

  if(N == 1) cout << 0;
  else {

  int prev = 0;
  int curr = 1;

  for(int i = 0; i < N-2 ;i++) {
    temp = prev;
    prev = curr;
    curr += temp;
  
  } cout << curr;

  } return 0;
}