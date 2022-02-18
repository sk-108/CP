#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	string ans;
	int cnt = 1;
	for(int i=0;i<s.size();i++)
	{
		int t = 0;
		while(t<cnt-1)
		{
			i++;
			t++;
		}
		ans.push_back(s[i]);
		cnt = cnt +1;
	}
	cout<<ans<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

