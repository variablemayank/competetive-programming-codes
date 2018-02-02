	#include<bits/stdc++.h>
	using namespace std;
	
	const int maxi =100005;
		int parent[maxi];
	int low[maxi];
	int  visited[maxi];
	bool apoint[maxi];
	int num[maxi];
//	int bridges[50][50];
	set<pair<int ,int> > bridges;
	vector<int>vec[maxi];
	int t;
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
					  	 //bridges[min(bro,x)][max(bro,x)] = true;
					  	 bridges.insert({bro,x});
					  	 bridges.insert({x,bro});
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
	    pair<int ,int> p[m];
		for(int i=0;i<m;i++)
		{
			int x,y;
			cin>>x>>y;
			vec[x].push_back(y);
			vec[y].push_back(x);
			p[i].first =  x;
			p[i].second= y;
		}
		for(int i=0 ;i<n;i++)
		{
			if(!num[i])
			{
				parent[i] = -1;
				Dfs(i);
			}
		}
		 
		 int q;
		 cin>>q;
		 while(q--)
		 {
		 	 int x,y;
		 	 cin>>x;
		 	 x= p[x-1].first;
		 	 y= p[x-1].second;
		  if(bridges.find({x,y})!=bridges.end()) cout<<"Unhappy"<<endl;
		 else cout<<"Happy\n";
		 }
		 
		 
		 return 0;
	}
