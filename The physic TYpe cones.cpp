#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v[n1];
    bool v1[n1];
	int t;
	cin>>t;
	for(int i=1;i<=t;i++) cin>>v[i];
	int temp =v[t];
	int count =0;
	int  s,e; cin>>s>>e;
	while(!v1[s])
	{
		v1[s] =1;
	    s = v[s];
	}
	if(v[e]) cout<<"Yes\n";
	else cout<<"No\n";
}
