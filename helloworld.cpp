#include<bits/stdc++.h>
using namespace std;

void solve()
{	
	int r,c;
	cin>>r>>c;
	int od = 1;
	int b = 1;
	while(r--)
	{
		if(od%2!=0)
		{
			for(int i=0;i<c;i++)cout<<"#";
			cout<<endl;
		}
		else{
			if(b==1){

				for(int i=0;i<c-1;i++)
					cout<<".";
				cout<<"#";
		}
		else{
				cout<<"#";
				for(int i=0;i<c-1;i++)
					cout<<".";
				
			}
				b = 1-b	;
			cout<<endl;
		}
		od++;
	
	}
}
	
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
//	int _t;cin>>_t;while(_t--)
	solve();
}
