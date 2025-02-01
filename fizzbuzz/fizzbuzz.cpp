#include <iostream>
using namespace std;

int main() {
	int N, A, B;
	cin >> N >> A >> B;
  int x;
  
  for(int i = 1; i <= N; i++) {
    x = 0;
    if (i%A==0) {cout << "Fizz"; x++;}
    if (i%B==0) {cout << "Buzz"; x++;}
    if (x == 0) cout << i;
    cout << endl;

  }
}