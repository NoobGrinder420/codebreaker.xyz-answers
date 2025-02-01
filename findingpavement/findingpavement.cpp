#include <bits/stdc++.h>
using namespace std;

int main() {
	#define int long long
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int H, W;
	string temp;
	cin >> H >> W;
	
	for(int j = 0; j < H; j++) {
		for(int i = 0; i < W; i++) {
			cin >> temp;
			if(temp == "pavement") {
				cout << j+1 << " " << i+1;
				return 0;
			}
		}
	}
		
	
}
