#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(), a.end()

signed main() {
	int L; string x;
	cin >> L >> x;

	vector<char> check;

	for(char i : x) {
		switch(i) {
			case '(':
				check.push_back('(');
				break;
			case '[':
				check.push_back('[');
				break;
			case '{':
				check.push_back('{');
				break;


			case ')':
				if(!check.empty() && check.back() == '(') {
					check.pop_back();
				} else {
					cout << "Invalid";
					return 0;
				}
				break;
			case ']':
				if(!check.empty() && check.back() == '[') {
					check.pop_back();
				} else {
					cout << "Invalid";
					return 0;
				}
				break;
			case '}':
				if(!check.empty() && check.back() == '{') {
					check.pop_back();
				} else {
					cout << "Invalid";
					return 0;
				}
				break;
		}
	}

	if(!check.empty()) {
		cout << "Invalid";
		return 0;
	}

	cout << "Valid";

	return 0;
}