#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  while (true) {
    if(n%2 == 1) {
      cout << n << " "; 
      n = (3*n)+1;
      
    } else {
      cout << n << " ";
      n = n/2;
      if (n==1) { 
        cout << n << " ";
        break;
      
      }
    }
  }

  return 0;
}
