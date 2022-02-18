#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int count = 0;
	int max = 0;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		count -= a;
		count +=b;
		if(count>max)
		{
			max = count;	
		}
		
	}
	cout<<max<<endl;
}	

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

