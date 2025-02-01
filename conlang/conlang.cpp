#include <bits/stdc++.h>
using namespace std;

int main() {
	#define int long long
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int N, valid=0;
	string S, temp;
	cin >> N >> S;
	bool sigma;
	int sze = S.size();
	
	for(int i = 0; i < N; i++) {
		sigma = true;
		cin >> temp;
		//cout << temp << endl;
		if(temp.size()!=sze) continue;
		for(int i = 0; i < sze; i++) {
			//cout << S[i] << " " << temp[i] << endl;
			if(S[i] == 'C') {
				if(temp[i] == 'a' || temp[i] == 'e' || temp[i] == 'i' || temp[i] == 'o' || temp[i] == 'u' || temp[i] == 'y') {
					//cout << "gets broken early" << endl;
					sigma = false;
					break;
				}
			} else {
				if(temp[i] != 'a' && temp[i] != 'e' && temp[i] != 'i' && temp[i] != 'o' && temp[i] != 'u' && temp[i] != 'y') {
					//cout << "gets broken" << endl;
					sigma = false;
					break;
				}
			}

			if(not sigma) break;
		}
		
		if(sigma) valid++;
		
	} cout << valid;
	
	return 0;
}