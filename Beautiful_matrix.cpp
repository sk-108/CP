#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a[5][5];
	int p = 0,q=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1){
			p = i;
			q = j;
		}		
		}
	}
	int ans = 0;
	ans = abs(p-2)+abs(q-2);
	cout<<ans<<endl;
}
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}