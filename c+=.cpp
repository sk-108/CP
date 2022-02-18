#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b,n;
	cin>>a>>b>>n;
	if(a>b)
	{
		swap(a,b);
	}
	int count = 0;
	while(a<=n)
	{
		a +=b;
		swap(a,b);
		count++;
	}
	count--;
	cout<<count<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int _t;cin>>_t;while(_t--)
	solve();
}

