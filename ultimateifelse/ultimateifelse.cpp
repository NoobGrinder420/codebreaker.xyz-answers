#include <iostream>
#include <cmath>
using namespace std;


int main() {
  
  int N;
  string S;

  cin >> N >> S;

  if (N == 1) cout << "one";
  else if (N == 9) cout << "9";
  else if (S == "hello") cout << "world";
  else if (S == "world" && N == 3) cout << "andss";
  else if (S == "hmm" || N == 20) cout << "sus";
  else if (S.length() > 5) cout << "long";
  else if (S.length() == N) cout << "equal";
  else if (N % 2 == 0) cout << "222222222222222222222";
  else cout << "clown";
  
  
  return 0;
}