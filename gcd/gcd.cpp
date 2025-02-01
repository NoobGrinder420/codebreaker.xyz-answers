#include <iostream>
using namespace std;

int main() {
	int a, b, tempa, tempb;
	cin >> a >> b;

  tempa = a;
  a = max(a, b);
  b = min(tempa, min(a, b));
  //cout << a << " " << b << endl;

  tempa = a;
  tempb = b;
  a = tempb;
  b = (tempa%tempb);
  //cout << a << " " << b << endl;

  if (b == 0) {
    cout << a;
    return 0;
  }
  //cout << a << " " << b << endl;
  for (int i = b; i > 0; i--){
    if (a%i==0 && b%i==0) {
      cout << i;
      return 0;
    }

  }
	
	return 0;
}