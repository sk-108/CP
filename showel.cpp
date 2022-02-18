#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int pr,ch;
	cin>>pr>>ch;
	int ans = 0;
	int res = 0;
	for(int i=1;i<=10;i++)
	{
		ans = pr*i;
		if(ans%10==0) 
		{
			res = i;
			break;
		}
		if(ans%10 == ch)		
		{
			res = i;
			break;
		}
	}
	cout<<res<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

