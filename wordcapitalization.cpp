#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	if(s[0]>='A' && s[0]<='Z')
	{
		cout<<s<<endl;
		return ;
	}
	else{
		s[0] = s[0]-32;
	}
	cout<<s<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

