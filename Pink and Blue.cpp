	#include<bits/stdc++.h>
	using namespace std;
	
	const int maxi =199999;
	int gender[maxi];
	int color[maxi];
	vector<int > graph[maxi];
	 
	void bfs(int src,int pos)
	{
		color[src] =  pos;
		queue<int> pq;
		pq.push(src);
			while(!pq.empty())
			{
			  int top = pq.front();
			  pq.pop();	
			  
				for(int i=0;i<graph[top].size();i++)
				{
					                  // adjacents
					if( color[graph[top][i]] ==0)
					{
					    pq.push(color[graph[top][i]]);
					    
						if(color[top] ==2)  // defining colours to the adjacent variable
						color[graph[top][i]] = 3;
					    else 
						color[graph[top][i]] =2;
					}
				}
		    }
    }
	int main()
	{
		int n,m;
		cin>>n>>m;
		    for(int i=1;i<=n;i++)
			{
			  char s;
			  cin>>s;
				  if(s=='B')// 11 for boy and 10 for girl
				  {
				     gender[i] = 3;	 // boy
				  }	
				  else 
			      {
			         gender[i] = 2; // girl  	
		          }	  
			}
			//for(int i=1;i<=n;i++) 
			///{
			//	cout<<gender[i]<<" "<<endl;
			//}
			for(int i=1;i<=m;i++)
			{
			     int u,v;
			     cin>>u>>v;
			     graph[u].push_back(v);
			     graph[v].push_back(u);
			}
			memset(color,0,sizeof(color));
		
			int countone =0,countwo =0;
			bfs(1,3);
			for(int i=1;i<=n;i++)
			{
				if(gender [i] != color[i]  ) 
				countone++;
			}
			
			memset(color,0,sizeof(color));
			bfs(1,2);
			for(int i =1;i<=n;i++)
			{
				if(gender[i]!= color[i]) 
				countwo++;
			}
			//cout<<countone<<endl;
			//cout<<countwo<<endl;
			cout<<min(countone,countwo);
}
