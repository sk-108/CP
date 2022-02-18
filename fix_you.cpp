#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int r,c;
	cin>>r>>c;
	vector<vector<char>>vec(r,vector<char>(c));
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>vec[i][j];
		}
	}
	int count = 0;
	for(int i=0;i<c;i++)
	{
		if(vec[r-1][i]=='D')count++;
	}
		for(int i=0;i<r;i++)
	{	
		if(vec[i][c-1]=='R')count++;
	}
	cout<<count<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int _t;cin>>_t;while(_t--)
	solve();
}

