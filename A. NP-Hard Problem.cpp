	#include<bits/stdc++.h>
	using namespace std;
	
	bool visited[100005];
    vector<int> vec[100005];
    int  color[100005];
    int to[100005];
    int from[100005];
    
    void init(int v)
    {
    	for(int i =0;i<v;i++) 
    	color[i] = -1;
	}
	void dfs(int u)
	{
         
 		 for(int i=0;i<vec[u].size();i++)
		 {
		 	 int v =vec[u][i];
		 	 if(color[v]==-1)
		 	 {
		 	 	color[v] = color[u] ^1;
		 	 	dfs(v);
			 }
		 }
		 
	}
    
	int main()
	{
	    int n,m;
	    cin>>n>>m;
	    for(int i=0;i<m;i++)
	    {
	   	int u,v;
	   	cin>>u>>v;
	   	u--;
	   	v--;
	   	vec[u].push_back(v);
	   	vec[v].push_back(u);
	   	from[i] =u;
	   	to[i] = v;
	    }
	    init(n);
	    for(int i=0 ;i<n;i++)
	    {
	    	if(color[i]== -1)
	    	{
	    	color[i] = 0;
	    	dfs(i);
	        }
		}
		//for(int i=0;i<n;i++)
		//cout<<i<<" "<<color[i]<<endl;
		for(int i=0;i<m;i++)
		{
			if(color[from[i]] == color[to[i]])
			{
				return cout<<"-1",0;
			}
		}
	    vector<int> x,y;
	    for(int i=0;i<n;i++)
	    {
	    	if(color[i]==0)
	    	{
	    		x.push_back(i);
			}
			else
			{
				y.push_back(i);
			}
		}
		cout<<x.size()<<endl;
		for(int i=0;i<x.size();i++)
		{
			cout<<1+x[i]<<" ";
		}
		cout<<endl;
		cout<<y.size()<<endl;
		for(int i=0;i<y.size();i++)
		{
			cout<<1+y[i]<<" ";
		}
		return 0;
	}
