	#include<bits/stdc++.h>
	using namespace std;
	
	
	#define ll long long 
	
	const int maxi = 200005;
	ll BIT[maxi],a[maxi],b[maxi];
	
	ll get(int x)
	{
		ll sum =0;
		while(x>0)
		{
			sum+= BIT[x];
			x -= (x&-x);
			
		}
		return sum;
	}
	
	ll update(ll x,ll value)
	{
		while(x<=maxi)
		{
			BIT[x] +=value;
			x += x&-x;
			
		}
	}
	
	int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			memset(BIT,0,sizeof(BIT));
			int n;
			scanf("%d",&n);
			for(int i=0;i<n;i++)
		    {
		    	scanf("%lld",&a[i]);
		    	b[i] =a[i];
		    	
			}
			sort(b,b+n);
			for(int i=0;i<n;i++)
			{
				int rank = lower_bound(b,b+n,a[i])- b;
				a[i] = rank+1;
				
			}
			
			ll inv_count =0;
			
			for(int i=n-1;i>=0;i--)
			{
				ll  x = get(a[i]-1);
				inv_count +=x;
				update(a[i],1);
			}
			printf("%lld\n",inv_count);
		}
	}
