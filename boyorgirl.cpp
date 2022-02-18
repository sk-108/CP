#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	int cnt = 0;
	vector<char>c(256,'a');
	for(int i=0;i<s.size();i++)
	{
		if(c[s[i]]!='a')
		{
			continue;
		}
		else{
			cnt++;
			c[s[i]]='b';
		}
	}
	cout<<cnt<<endl;
	if(cnt%2==0)cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

