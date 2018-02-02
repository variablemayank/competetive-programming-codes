	#include<bits/stdc++.h>
	using namespace std;
	
	#define ll long long
	const int maxi = 1000006;
	ll BIT[maxi];
	 
    ll get(int x)
    {
    	ll sum =0;
        while(x>0)
		{
			sum+= BIT[x];
			x-= x&-x;
		}	
		return sum;
	}
	
	void update(int x,int value)
	{
		while(x<=maxi)
		{
			BIT[x] += value;
			x+= x&-x;
		}
	}
	
    ll a1[maxi],a2[maxi];
    ll arr[maxi];
    ll b[maxi];
	int main()
	{
	   int n;
	   scanf("%d",&n);
	   
	   for(int i=1;i<=n;i++)
	   {
	   	 scanf("%d",&arr[i]);
	   	 b[i] = arr[i];
	   }
	   
	   sort(b+1,b+1+n);
	   
	    for(int i=1;i<=n;i++)
	    {
	   	  int k = lower_bound(b+1,b+n+1,arr[i]) -b;
	   	  update(k,1);
	   	  a1[i] = get(n) - get(k);
	   	}
        memset(BIT,0,sizeof(BIT));
        
	   	for(int i=n;i>=1;i--)
	   	{
	   	    int k = lower_bound(b,b+n+1,arr[i])-b;
			update(k,1);
			a2[i] = get(k-1);
		}
		ll ans =0;
	    for(int i=1;i<=n;i++)
	    {
	    ans += a1[i]*a2[i];	
		}
		printf("%lld\n",ans);
	}
