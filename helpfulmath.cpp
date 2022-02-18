#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	sort(s.begin(),s.end());
//	cout<<s<<endl;
	string ans;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='+')
		{
			ans.push_back(s[i]);
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		
		if(i!=ans.size()-1)
		cout<<ans[i]<<"+";
		else
			cout<<ans[i]<<endl;
		
	}
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

