#include<bits/stdc++.h>
using namespace std;

void solve()
{
	vector<int>vec(4);
	for(int i=0;i<4;i++)cin>>vec[i];
	sort(vec.begin(),vec.end());
	int c = vec[3]-vec[0];
	int a = vec[1] - c;
	int b = vec[0] - a;
	cout<<a<<" "<<b<<" "<<c<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//int _t;cin>>_t;while(_t--)
	solve();
}

