#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;cin>>n;
	int level = 1;
	int bricks = 1;
	if(n==1)
	{
		cout<<1;
		return;
	}
	int ans = 0,count =0;
	while(ans<=n)
	{
		ans += bricks;
		level++;
		bricks = ((level)*(level+1))/2;
		count++;
	}	
	count--;
	cout<<count<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

