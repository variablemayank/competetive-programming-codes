	#include<bits/stdc++.h>
	using namespace std;
	
	int arr[300006];
	map<int,int> mp;
	vector<int> vec[300006];
	
	void add(int x) 
	{
		mp[x]++;
	}
	
	void remove(int x)
	{
		   if(mp[x]==1)
		   {
		        mp.erase(x);	
		   }
		   else
		   {
		        mp[x]--;	
		   }	
	} 
	
	
	int main()
	{
		int n;
		scanf("%d",&n);
		
		for(int i=1;i<=n;i++) 
		{
		    scanf("%d",&arr[i]);
		    mp[arr[i]]++;
		}
		
		for(int i=1;i<=n-1;i++)
		{
			int u,v;
			scanf("%d%d",&u,&v);
			vec[u].push_back(v);
			vec[v].push_back(u);
		}
		
		int ans = 1e9+7;
		for(int i=1;i<=n;i++)
		{
			int var = arr[i];
			
			remove(arr[i]);
			for(int j=0;j<vec[i].size();j++)
			{
				remove(arr[vec[i][j]]);
				var = max(var,arr[vec[i][j]]+1);
				
			}
			
	        map<int,int> ::iterator it = mp.end();
	        
	        if(!mp.empty())
	        {
	        	it--;
	        	var = max(var,it->first+2);
			}
			ans = min(var,ans);
			
			add(arr[i]);
			
			for(int j=0;j<vec[i].size();j++)
			{
				add(arr[vec[i][j]]);
			}
		}
	    printf("%d",ans);
	}
