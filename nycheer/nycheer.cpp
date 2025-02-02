#include <iostream>
using namespace std;

void cheer(int x) {
  switch (x) {
  case 1:
    cout << "Hey";
    break;
  case 2:
    cout << "Ho";
    break;
  case 3:
    cout << "Nanyang";
    break;
  }
}

int main() {
  int a, b;
  cin >> a >> b;

  cheer(a); cout << " "; cheer(b);
  
  return 0;
}