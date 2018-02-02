	#include<bits/stdc++.h>
	using namespace std;
	
	const int maxi =50;
	int parent[maxi];
	int low[maxi];
	int  visited[maxi];
	bool apoint[maxi];
	int num[maxi];
	int bridges[50][50];
	int t;
	vector<int>vec[maxi];
	
	void Dfs(int x)
	{
		 visited[x] = true;
		 num[x] = low[x]  = t++;
	     int  rootchild =0;
	     for (int i =0 ;i<vec[x].size();i++)
	     {
	          int bro = vec[x][i];
			  
				  if(!visited[bro])
				  { 
				  	  parent[bro] = x;
				  	  rootchild++;
				  	  Dfs(bro);
				  	  low[x] = min(low[x],low[bro]);
				  	  if(low[bro] >=  num[x] && parent[x] != -1)
				  	  {
				  	    apoint[x] = true;	// ap checking 
					  }
					  // Bridges 
					  if(low[bro]> num[x])
					  {
					  	 bridges[min(bro,x)][max(bro,x)] = true;
					  } 
					  if(parent[x] == -1  && rootchild>=2)
					  {// if rootnode has more than two child its 
					// also a articulation point 
					  	apoint[x] = true; 
					  }
				  	  
				  }
				  else if( parent[x] != bro)
				  {
				  	  low[x] = min(low[x],num[bro]);
				  }    	 
		 }
	}
	int main()
	{
		int n,m,x,y;
	    cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int x,y;
			cin>>x>>y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}
		for(int i=0 ;i<n;i++)
		{
			if(!num[i])
			{
				parent[i] = -1;
				Dfs(i);
			}
		}
		int ans =0;
		for(int i=0;i<n;i++)
		{
			if(apoint[i]) ans ++;
		}
		cout<<ans<<endl;
		
		for(int i=0;i<n;i++)
		{
			if(apoint[i] == true) cout<<i<<" ";
		}
		cout<<" \n";
		ans =0;
		for(int i= 0;i< n;i++)
		 for(int j=0;j<n;j++)
		 if(bridges[i][j]) ans++;
		 
		 for(int i=0;i<n;i++)
		 for(int j=0;j<n;j++)
		 if(bridges[i][j]) cout<<i<<" "<<j<<endl;
		 
		 return 0;
	}
