#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define i int 
int main()
{
	i t;
	cin>>t;
	while(t--) 
	{
		i n;
		ll hash[1000006]={0},count =0;
		cin>>n;
		while(n--)
		{
			ll ta,tb;
			hash[ta]++;
			if(hash[tb]==0)
			count++;
			else
			hash[tb]--;
		}
		cout<<count<<"\n";
	}
	return 0;
	}
