#include <iostream>
using namespace std;

int main(){
    long long A, B;
	cin >> A >> B;
	while(cin >> A) B -= A;
	cout << (B < 0 ? "No" : "Yes");
}