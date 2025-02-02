#include <iostream>
using namespace std;

int main() {
	int n, w;
	cin >> n;
  
  for(int i = 1; i <= n; i++) {
    string triangle(i, '*');
    cout << triangle << endl;

  }
}