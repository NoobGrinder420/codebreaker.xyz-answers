#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;
  long long nums[t];

  for(int i = 0; i < t; i++) {
    cin >> nums[i];
    
  }
  for(int i = 0; i < t; i++) {
    cout << pow(nums[i], (double) 1/3) << endl;

  }
  
  return 0;
}


// also:

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//   int t;
//   cin >> t;
//   long long nums[t];

//   for(int i = 0; i < t; i++) {
//     cin >> nums[i];
    
//   }
//   for(int i = 0; i < t; i++) {
//     cout << pow(nums[i], (double) 1/3) << endl;

//   }
  
//   return 0;
// }