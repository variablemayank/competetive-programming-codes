 	#include<bits/stdc++.h>
 	using namespace std;
 	
 	const int maxi = 1000010;
 	
 	int arr[maxi];
 	
 	pair<pair<int,int>,int> query[maxi];
 	map<int,int>mp;
 	int prefix[maxi];
 	int ans[maxi];
 	const int N= 2*maxi+10;
 	int BIT[N];
 	
 	void add(int x,int val)
 	{
 		while(x<N)
 		{
 			BIT[x] = BIT[x] ^val;
 			x+= x&-x;
		}
	}
	
	
	int get(int x)
	{
		int sum =0;
		while(x>0)
		{
			sum =  sum ^BIT[x];
			x-= x&-x;
		}
		return sum;
	}
	
	
 	int main()
 	{
 		ios_base::sync_with_stdio(false);
 		cin.tie(0);
 		cout.tie(0);
 		
 		
 	    int n,q;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			
		}
		
		for(int i=1;i<=n;i++)
		{
			prefix[i] = prefix[i-1]^arr[i];
		}
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>query[i].first.second>>query[i].first.first;
			query[i].second = i;
		}
		sort(query,query+q);
		
	//	int t;
		for(int i=1,t=0;i<=n;i++)
		{
			if(mp[arr[i]]==0)
			{
				add(i,arr[i]);
				
			}
			else
			{
				add(i,arr[i]);
				add(mp[arr[i]],arr[i]);
			}
			mp[arr[i]]= i;
			
			while(true)
			{
				if(query[t].first.first!=i|| t==q) break;
				int res = prefix[i] ^prefix[query[t].first.second-1];
			 	res  = res ^ (get(i)^get(query[t].first.second-1));
			    ans[query[t].second] 	= res;
			    t++;
			}
			
		}
		for(int i =0;i<q;i++)
		{
			cout<<ans[i]<<"\n";
		}
	}
