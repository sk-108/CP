#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int k;
	cin>>k;
	string s;
	cin>>s;
	
	map<char,int>m;
	for(int i=0;i<s.size();i++)
	{
		m[s[i]]++;
	}
	for(auto it=m.begin();it!=m.end();it++)
	{
		if(it->second%k!=0)
		{
			cout<<-1;
			return;
		}
	}
	
	int count = 0;
	while(count<s.size())	{
		for(auto it= m.begin();it!=m.end();it++)
		{
			if(it->second != 0){
				cout<<it->first;
				m[it->first]--;
			}
		count++;
		}
	}
	
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

