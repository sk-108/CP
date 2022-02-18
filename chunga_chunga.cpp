#include<bits/stdc++.h>
using namespace std;

int small(int r1,int r2,int z)
{
	int big = r1;
	if(r1<r2)big = r2;
	else big = r1;
	 if(z-big !=z)
	{
			return z-big;
	}
	else return 0;
	
}

void solve()
{
	int x,y,z;
	cin>>x>>y>>z;
	int r1 = x%z;
	int r2 = y%z;
	if(r1 ==0 || r2 == 0)
	{
			int sum = 0;
			sum += x/z;
			sum += y/z;
			cout<<sum<<" "<<0<<endl;
	}
	else{
	
				int sum = 0;
				sum += x/z;
				sum += y/z;
				int r = r1+r2;
				sum +=  r/z;
				if(r>=z)
				cout<<sum<<" "<<small(r1,r2,z)<<endl;
				else
				cout<<sum<<" "<<0<<endl;
}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

