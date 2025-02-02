#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

  int n, res=0, t1, t2;
  cin >> n;


  vector<int> prices(n, 0), inc(n, 0);

  for(auto &x: prices) cin >> x; 
  for(auto &x: inc) cin >> x; 
    
  for(int j = 0; j < n; j++) {
    for(int i = 0; i < n; i++) {
      if(inc[i] == max(inc[t2], inc[i])) {
        t1 = prices[i] + inc[i]*j;
        t2 = i;
        //cout << t1 << ' ' << t2 << endl;
      }
    }

    //cout << t1 << ' ' << inc[t2] << endl;

    res+=t1;
    inc[t2] = -15;

    //cout << res << ' ' << inc[t2] << endl;
  }

  cout << res;
  
  return 0;      
}

