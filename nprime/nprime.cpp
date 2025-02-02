#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  short n;
  cin >> n;

  int j = 2;
  if (n == 1) j = 2;
  int c = 2;
  bool prime = true;

  while (c <= n) {
    j++;
    for (int i = 2; i <= (int)pow(j, 0.5) ; i++) {
      if(j%i==0) {
        prime = false;
        break;
      }
    }
    if(prime) c++;
    prime = true;
    
  } cout << j;

  return 0;
}