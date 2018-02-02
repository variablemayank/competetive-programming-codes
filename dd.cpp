#include<bits/stdc++.h>
using namespace std;

ll main()
{
	ll t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,k;
		scanf("%lld%lld",&n,&k);
		if(n%k!=0)
		{
		  long long val = (n%k);
		  prllf("%lld\n",val);
		}
		else if(n==k) prllf("%lld\n",k);
		else 
		{
		 long long val = n/k;
		 val = (val-1) *k;
		 prllf("%lld\n",n-val);
		}
	}
	return 0;
}
