#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

  int N, M, S, mx1 = -10, mx2 = -10;
  cin >> N >> M >> S;

  int m[M], s[S];
  for(auto &x : m) cin >> x;
  for(auto &x : s) cin >> x;
  
  sort(m, m + M);
  sort(s, s + S);

  for(int i = 0; i < N; i++){
    mx1 = max(mx1, m[i]+s[N-1-i]);
  }

  for(int i = 0; i < N; i++){
    mx2 = max(mx2, s[i] + m[N-1-i]);
  }

  cout << min(mx1, mx2);

  return 0;      
}

