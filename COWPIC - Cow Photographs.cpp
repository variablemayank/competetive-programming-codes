	#include<bits/stdc++.h>
	using namespace std;
	
	#define ll long long
    const int maxi = 100005;
    
    int BIT[maxi];
    
    void update(int x,int value)
    {
    	
    	while(x<maxi)
    	{
    		BIT[x] += value;
    		x += x&-x;
		}
		
	}
	
	ll get(int x)
	{
		ll sum =0;
		while(x>0)
		{
			sum+= BIT[x];
			x -= x&-x;
		}
		return sum;
	}
	
	ll arr[maxi],position[maxi];
	
	
	int main()
	{
		int n;
	    while(cin>>n)
		{
		memset(BIT,0,sizeof(BIT));
	    for(int i=1;i<=n;i++)
	    {
	    	scanf("%lld",&arr[i]);
	    	position[arr[i]] =i;
		}
		
		ll ans=0;
		for(int i=1;i<=n;i++)
		{
			ans += i -1- get(arr[i]);
			update(arr[i],1);
		}
		
		ll ans1=ans;
		
		for(int i=1;i<=n;i++)
		{
			ans1 -= position[i] -1;
			ans1 += n- position[i];
			ans= min(ans,ans1);
		}
		printf("%lld\n",ans);
	    }
		return 0;
	}
