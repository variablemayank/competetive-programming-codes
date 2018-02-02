#include<bits/stdc++.h>
using namespace std;
int algo(int  n)
{
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int i=2;i<=n;i++)
	{
		if(i%2||i%3||i%5==0)
		{
			prime[i]=false;
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
		{
			cout<<"TRUE\n";
		}
		else
		{
			cout<<"FALSE\n";
		}
	}
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
	    algo(n);
	    
	}
	return 0;
}

