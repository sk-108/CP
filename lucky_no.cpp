#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	bool b = true;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='7' && s[i]!='4')
		{
			b = false;
			break;
		}
	}
	if(b==false)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

