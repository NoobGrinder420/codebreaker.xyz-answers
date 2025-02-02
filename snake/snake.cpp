#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	char C;
	ll N, Q, x, p;
	cin >> N >> Q;

	deque<pair<ll, ll>> snake;

	for(ll i = 0; i < N; i++) {
		snake.push_back({i+1, 0});
	}

	for(ll j = 1; j <= Q; j++) {
		cin >> x;
		
		switch(x) {
			case 1:
				cin >> C;

				//for(pair<ll, ll> i : snake) cout << i.first << " " << i.second << "   " ;
				//cout << endl;

				switch(C) {
					case 'R':
						snake.push_front({snake.front().first + 1, snake.front().second});
						break;
					case 'L':
						snake.push_front({snake.front().first - 1, snake.front().second});
						break;
					case 'U':
						snake.push_front({snake.front().first, snake.front().second + 1});
						break;
					case 'D':
						snake.push_front({snake.front().first, snake.front().second - 1});
						break;
						
				} snake.pop_back();

				//for(pair<ll, ll> i : snake) cout << i.first << " " << i.second << "   " ;
				//cout << endl << endl;
				break;

			case 0:
				cin >> p;
				cout << snake[p-1].first << " " << snake[p-1].second << endl;
				break;
				
			case 2:
				cin >> p;
				cout << snake[p-1].first << " " << snake[p-1].second << endl;
				break;
				
		}
		
	}

	return 0;
}