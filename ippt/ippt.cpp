#include <iostream>
using namespace std;

int main() {
  short a, b, c, sum;
  cin >> a >> b >> c;
  sum = a + b + c;

  if( a == 0 || b == 0 || c == 0 ) cout << "FAIL" << endl;
  else if(sum <= 60) cout << "FAIL" << endl;
  else if(sum <= 74) cout << "PASS" << endl;
  else if(sum <= 84) cout << "SILVER" << endl;
  else cout << "GOLD" << endl;


  return 0;
}