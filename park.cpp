#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m;
	cin>>n>>m;
	int mul = n*m;
	if(mul%2!=0)
	{
		cout<<mul/2+1<<endl;
		return;
	}
	else{
		cout<<mul/2<<endl;
	}
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int _t;cin>>_t;while(_t--)
	solve();
}

