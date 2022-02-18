#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string a;
	cin>>a;
	string b;
	cin>>b;
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	transform(b.begin(), b.end(), b.begin(), ::toupper);
	for(int i=0;i<a.size();i++)
	{
		if(a[i] > b[i])
		{
			cout<<1<<endl;
			return ;
		}
		else if(a[i] < b[i])
		{
			cout<<-1<<endl;
			return ;
		}
	}
	cout<<0<<endl;
	return ;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

