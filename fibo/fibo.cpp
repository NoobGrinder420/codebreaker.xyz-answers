#include <iostream>
using namespace std;

int main() {
	int N;
  long long neg1 = 0;
  long long neg2 = 1;
  long long temp = 0;
	cin >> N;
  if (N>0) cout << 0 << endl;
  else return 0;

  for(int i = 1; i <= N; i++) {

    cout << (neg1 + neg2)%998244353 << endl;
    temp = neg2%998244353;
    neg2 = neg1%998244353;
    neg1 = (neg2 + temp)%998244353;

  }
}