#include <iostream>
#include <cmath>
using namespace std;

int main() {
  unsigned short t;
  cin >> t;
  int ans[t];

  for(int i = 0; i < t; i++) {
    int x1, y1, x2, y2;
    int time;
    int check = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    

    if (x1 == x2 || y1 == y2) time = abs(x1-x2) + abs(y1-y2);
		else time = abs(x1-x2) + abs(y1-y2) + 2;

    ans[i] = time;

  }

  for(int i : ans) {
    cout << i << endl;
  }
  
  return 0;
}