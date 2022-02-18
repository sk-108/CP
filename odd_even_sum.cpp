#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int>vec(n)	;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
		sum += vec[i];
	}
	if(sum%2 != 0)
	{
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int _t;cin>>_t;while(_t--)
	solve();
}

