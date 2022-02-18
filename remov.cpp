#include<bits/stdc++.h>
using namespace std;

bool find(string vow,char ch)
{
	for(int i=0;i<vow.size();i++)
	{
		if(ch==vow[i])
		{
			return false;
		}
	}
	return true;
}

void solve()
{
	string s;
	cin>>s;
	string vow = "aoyeiuAOYEIU";
	string ans;
	for(int i=0;i<s.size();i++)
	{
		if(find(vow,s[i]))
		{
			ans.push_back('.');
			if(s[i]>='A' && s[i] <='Z')
			{
				ans.push_back(s[i]+32);
			}
			else{
				ans.push_back(s[i]);
			}
		}
	}
	cout<<ans<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

