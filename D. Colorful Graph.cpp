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
	#define sz(c)     (int)c.size()
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =100005;
    set<int> cardinality[maxi];

	//int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
	//int n,m,k;
	
	int check[maxi];
	int color[maxi];
	vector<int> graph[maxi];
	int main()
	{
		jadu;
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>color[i];
		for(int i=1;i<=n;i++)
		{
			check[color[i]] =1;
		}
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
	
		
		for(int i=1;i<=n;i++)
		{
			int flag  = color[i];
			for(int j=0;j<graph[i].size();j++)
			{
				int v=  graph[i][j];
				if(flag == color[v]) continue;
				cardinality[flag].insert(color[v]);
			}
		}
		
		int ans = 0;
		for(int i=0;i<=100005;i++)
		{
		 	ans = max(ans,sz(cardinality[i]));
		}
		
		for(int i=0;i<=100005;i++)
		{
			if(ans == cardinality[i].size() && check[i] == true) // check for if this color exists
			{
			 return cout<<i,0;
			}
		}
	}
