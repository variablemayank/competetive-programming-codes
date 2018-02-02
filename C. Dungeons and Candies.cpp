	#include"bits/stdc++.h"
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define p  pair<int,int>
	char graph[1003][12][12];
	int cost[1003][1003];
	int main()
	{
		jadu; //haha
		int  row,col,level,w;
		cin>>row>>col>>level>>w;
		for(int i=0;i<level;i++)
		{
			for(int j=0;j<row;j++)
			{
				cin>>graph[i][j];
			}
		}
		
		for(int i=0;i<level;i++)
		{
			for(int j=0;j<level;j++)
			{
				if(i!=j)
				{
					  int count =0;
					  for(int x=0;x<row;x++)
					  {
					    
						  for(int y=0;y<col;y++)
						  {
						     if(graph[i][x][y] !=graph[j][x][y])
						     {
						     	count++;
							 }
						  }
					  }
					  count = count *w;
					  cost[i+1][j+1] = count;
				}
			
			}
			cost[i][0]= cost[0][i] =  row *col;
		}
		for(int i=0;i<=row;i++)
		{
			for(int j=0;j<=col;j++)
			{
				cout<<cost[i][j]<<" ";
			}
			cout<<endl;
		}
		vector<p> ans;
		int parent[1003];
		int sum =0;
		int visited[1003] ={0};
		priority_queue<p> pq;
		for(int i=0;i<level;i++) pq.push(make_pair(-row * col,i+1));
		for(int i=0;i<level;i++) parent[i+1] = 0;
		
		while(!pq.empty())
		{
			p var = pq.top();
			pq.pop();
			if(visited[var.second]) continue;
		    visited[var.second] =1;
		    sum += -var.first;
		    ans.push_back(make_pair(var.second,parent[var.second]));
		    for(int i=1;i<=level;i++)
		    {
		    	if( !visited[i] && cost[var.second][i] <cost[parent[i]][i])
		    	{
		    		parent[i] = var.second;
		    		pq.push(make_pair(-cost[var.second][i],i));
				}
				
			}
		
		}
			cout<<sum<<endl;
			for(int i=0;i<ans.size();i++)
			{
				cout<<ans[i].first<<" "<<ans[i].second<<endl;
		    }
		    return 0;
	}
