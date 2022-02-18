#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a,n;
	cin>>a>>n;
	if(n<=10)
	{
		cout<<0<<endl;
		return ;
	}
	int an = n/a;
	an--;	
	int r = n%a;
	if(r<=10)
	{
		an++;
		cout<<an<<endl;
		return ;
	}
	else{
			 r = r/10;
			 r--;
			 an += r;
			 an++;
			cout<<an<<endl;
	}

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int _t;cin>>_t;while(_t--)
	solve();
}

