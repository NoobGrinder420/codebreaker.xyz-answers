#include <bits/stdc++.h>
using namespace std;
#define int long long
int ex(int x,int y,int z){
	if(y==0) return 1;
	
	int r=ex(x,(y/2),z)%z;

	if(y%2==0)return r%z*r%z;
	else return x%z*r%z*r%z;

}
signed main(){
    int T,a,b,m;
    cin >> T;
	for(int i = 0;i < T;i++){
          cin>>a>>b>>m;
		  cout<<ex(a,b,m)<<"\n";
    }
}