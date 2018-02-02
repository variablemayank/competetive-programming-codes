#include<bits/stdc++.h>
using namespace std;
long s[100];
int main()
{
	string st;

	cin>>st;
	for(int i=0;i<st.size();i++){
		s[i+1] = s[i] + (st[i]-'0');
	}
	//for(int i=1;i<=st.size();i++) cout<<s[i]<<" ";
	cout<<endl;
	
	long v1;
	long v2;
	long ans=0;
	for(int i=1;i<st.size();i++)
	{
		if(st[i]=='1') continue;
		v1 =s[i];
		v2 = s[st.size()] -s[i];
		ans += v1 *v2;
	}
	cout<<ans<<endl;
	return 0;
}
