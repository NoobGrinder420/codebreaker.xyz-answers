#include <iostream>
using namespace std;

int main() {
	int s;
	cin >> s;

	if (s>=91) cout << "A*";
    else if (s>=75) cout << "A";
    else if (s>=60) cout << "B";
    else if (s>=50) cout << "C";
    else if (s>=35) cout << "D";
    else if (s>=20) cout << "E";
    else cout << "U";
	
	return 0;
}