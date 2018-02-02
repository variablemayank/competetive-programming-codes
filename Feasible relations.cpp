#include<bits/stdc++.h>
using namespace std;

const int maxi = 1000006;
vector<int> same[maxi];
bool visited[maxi];
int dist[maxi];

void dfs(int u,int id)
{
	visited[u] = true;
	dist[u] = id;  // making parent or combining or making in one family
	for(int i=0;i<same[u].size();i++)
	{
		int  v= same[u][i];  // adjacent edge;
		if(!visited[v]) dfs(v,id);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	   
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++)
	    {
	       same[i].clear();
		}
		memset(visited,false,sizeof(visited));
		vector<pair<int,int > >notsame;
		for(int i=0;i<m;i++)
		{
			
		
		   int u,v;
	       string s;
		   cin>>u>>s>>v;
		   u--;
		   v--;
		   if(s == "=")
		   {
			same[u].push_back(v);
			same[v].push_back(u);
	       }
	       else
	       {
	        	notsame.push_back(make_pair(u,v));
	       }
		
	    }
	  //  for(int i=0;i<notsame.size();i++)
	  //  {
	  //  	cout<<notsame[i].first<<" "<<notsame[i].second<<endl;
   	  //  }
	    for(int i =0;i<n;i++)
	    {
	    	if(!visited[i])
	    	dfs(i,i);
		}
	//    cout<<"dist is = \n";
		//for(int i=0;i<n;i++)
	   // {
	//		cout<<dist[i]<<" ";
	//	}
		bool flag = true;
		for(int i=0;i<notsame.size();i++)
		{
			int f  = notsame[i].first;
			int s=   notsame[i].second;
		    
			if(dist[f]==dist[s]) // means != having a relation with equal 
			{
			//	cout<<"first is ="<<f<<endl;
			//	cout<<"seocnd is"<<s<<endl;
				flag = false;
				break;
			}
		}
		if(flag== false) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
