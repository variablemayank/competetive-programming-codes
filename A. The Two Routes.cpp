		/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (ll i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =1005;

///	int arr[maxi];
//	int brr[maxi];
//	int crr[maxi];
//	int n,m,k;
	
	vector<int> graph[1000];
	vector<int> road[1000];
    
    int depth[1000] ={0};
    int depth1[1000] = {0};
    bool visited[1000] = {false};
    bool visit[1000] = {false};
    void bfs(int s)
    {        
	        queue<int> Q;
			Q.push(s);
			visited[s] = true;
			depth[s] = 0;
			
			while (!Q.empty())
			{
				
			int u = Q.front(); 
			Q.pop();
			
			for (int i = 0; i < graph[u].size(); i++)
		    {
			int v = graph[u][i];
			if (!visited[v])
		    {
			Q.push(v);
			visited[v] = true;
			depth[v] =depth[u]+1;
			}
			}
			}
	}
	
	void bfs1(int s)
    {        
	        queue<int> Q;
			Q.push(s);
			visit[s] = true;
			depth1[s] = 0;
			
			while (!Q.empty())
			{
				
			int u = Q.front(); 
			Q.pop();
			
			for (int i = 0; i < road[u].size(); i++)
		    {
			int v = road[u][i];
			if (!visit[v])
		    {
			Q.push(v);
			visit[v] = true;
			depth1[v] =depth1[u]+1;
			}
			}
			}
	}
	int main()
	{
		int n,e;
		cin>>n>>e;
		for(int i=0;i<e;i++)
		{
			int u,v;
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		
		for(int i=1;i<=n;i++)
		{
			set<int> s;
			for(int j=0;j<graph[i].size();j++)
			{
				s.insert(graph[i][j]);
			}
			//for(set<int> ::iterator it = s.begin();it!=s.end();it++) 
			//cout<<*it<<" ";
			//cout<<endl;
			for(int j=i+1;j<=n;j++)
			{
	            if(s.find(j)!=s.end()) continue;
	            road[i].push_back(j);
	            road[j].push_back(i);
			}
		}
		/*for(int i=1;i<=n;i++)
		{
			for(int j=0;j<road[i].size();j++)
			{
				cout<<i<<" "<<road[i][j]<<endl;
			}
		}
		*/
		
		bfs(1);
		bfs1(1);
		if(depth[n] == 0 || depth1[n]==0) cout<<"-1";
		else  cout<<max(depth[n],depth1[n]);
	}
