#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	int min = INT_MAX,max = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(vec[i]<min)min = vec[i];
		if(vec[i]>max) max = vec[i];
	}
	cout<<max-min<<endl;
}


signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int _t;cin>>_t;while(_t--)
	solve();
}

