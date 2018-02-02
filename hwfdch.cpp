	#include<bits/stdc++.h>
	using namespace std;
	typedef long long ll;
	ll n;
	ll arr[100005];
	ll arr1[100005];
			int ans(ll final)
			{
				ll i,t=0,m=0,d,v=n;
				for(i=0;i<n;i++)
				{
					if(arr[i]>=final)
					{ 	m=v-i;	v=i-1;break;	} 	}
					while(t<=v)
				{
					d=final-arr[v];t=t+d;
						if(t<=v)
					{   m++;	v=v-1;} 	}
						
						return m;	}
					
				int main()
	{ ios_base::sync_with_stdio(false);
		int test;	cin>>test;while(test--)	{
	
			ll q;	cin>>n>>q; for(ll i=0;i<n;i++) cin>>arr[i];	sort(arr,arr+n);
			for(int i=0;i<q;i++)
			{
				cin>>arr1[i];	cout<<ans(arr[i])<<endl;	} 	}
				return 0;
	}
		
	
			
		
		
		
	
		
				
					
						
				
			
			
			
		

