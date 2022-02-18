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
	int count = 1 , max = 1;
	for(int i=1;i<n;i++)
	{
		if(vec[i]>vec[i-1])
		{
			cout<<vec[i]<<" ";
			count++;
		}
		else{
			count=1;
		}
		if(count>max)
		{
			max = count;
		}
	}
	cout<<count<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

