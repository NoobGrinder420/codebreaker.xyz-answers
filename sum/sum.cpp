#include <bits/stdc++.h>
using namespace std;
//idk how this works either copied from elsewhere

inline int readInt() {
    int x = 0;
    char ch = getchar_unlocked();
    while (ch < '0' || ch > '9') ch = getchar_unlocked();
    while (ch >= '0' && ch <= '9'){
		x = (x << 3) + (x << 1) + ch - '0';
		ch = getchar_unlocked();
	}
    return x;
}

int main(){
	long long temp1, temp2;
	long long x = 0, y = 0;
	int N = readInt();
	for(int i = 0; i < N; i++) {
		temp1 = readInt();
		temp2 = readInt();
		x+=temp1;
		y+=temp2;
	}
	
	cout << x << " " << y;
	
	
	
	
	return 0;
}
