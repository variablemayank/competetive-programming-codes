#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	
	if(s[a]==s[b]) cout<<"0";
	else cout<<abs(abs(s[a-1]-s[b-1]));
}
