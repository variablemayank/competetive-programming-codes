	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		int n,m,k;
		cin>>n>>m>>k;
	    vector<int> arr(100);
	    for(int i=1;i<=n;i++)
	    cin>>arr[i];
	    
	    pair<int ,int >p[100];
	    for(int i=1;i<=m;i++)
	    {
	   	   int u,v;
	   	   cin>>u>>v;
	   	   p[i].first = u;
	   	   p[i].second = v;
	   	   
	    }
	    bool flag = true;
	    int ans =0;
	    int count =0;
	    while(flag)
	    {
	    	
	    	for(int i=1;i<=m;i++)
	    	{
	    		int u= p[i].first;
	    		int v= p[i].second;
	    	
	    		if((arr[u]+arr[v])&1)
	    		{
	    			int t= __gcd(arr[u],arr[v]);
	    			if(t!=1)
	    			{
	    			arr[u] =arr[u]/t;
	    			arr[v] = arr[v]/t;
	    			ans++;
	    		    }
	    		    else count++;
				}
				if(count == m) flag = false;
			}
			if(flag ==false) break;
		}
		cout<<ans<<endl;
	}
