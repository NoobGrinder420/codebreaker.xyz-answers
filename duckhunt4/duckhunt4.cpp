#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(),a.end()
#define one first
#define two second

signed main() {
	int x;
	cin >> x;

	int f = x%500;
	int sum = ((x-f)/500)*1000;
	x-=sum/2;
	sum+=(x-(x%5));

	cout << sum;

	return 0;
}