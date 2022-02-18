#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int floor , size ;
	cin>>floor>>size;
	int ans = 1;
	int com = 2;
	if(floor<=2)	
	{
		cout<<1<<endl;
	}
	else{
		while(com<floor){
		ans++;
		com+=size;
	}
	cout<<ans<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int _t;cin>>_t;while(_t--)
	solve();
}

