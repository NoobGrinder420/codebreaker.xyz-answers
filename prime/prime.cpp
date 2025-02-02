#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  unsigned int n;
  cin >> n;

  bool composite = false;

  if(n == 0 || n == 1) {
    composite = true;
    //cout << 10;

  } else {
    for(int i = 2; i <= pow(n, 0.5); i++) {
        //cout << n << " % " << i << " = " << n%i << endl;
        if(n%i == 0) {
          composite = true;
          //cout << "composite should be true" << endl;
          break;
          
        }
    }
  }
  //cout << composite << " ";
  cout << (composite ? "Not Prime" : "Prime") << endl;
	
	return 0;
}

