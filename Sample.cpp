	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (int)c.size()
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =3001;
   
	//int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
	//int n,m,k;
	int papa[maxi];
    vector<int> graph[maxi];
	bool visited[maxi] ={false};
		
    void dfs(int s,int len )
    {
       if(len ==2)
       {
       	 papa[s]++;
       	 return;
	   }
	   for(int j=0 ;j<sz(graph[s]) ; j++)
	   {
	   	 if(!visited[graph[s][j]])
	   	   dfs(graph[s][j],len+1);
	   }
	}
	int main()
	{
		jadu;
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int u,v;
			cin>>u>>v;
			graph[u].push_back(v);
			
		}
		int  ans =0;
		for(int i=1;i<=n;i++)
		{
	        for(int j=1;j<=n;j++) papa[j] = 0;
	        dfs(i,0);
	        for(int j=0;j<=n;j++)
	        {
	        	if(j!=i)
	        	ans += ((papa[j])*(papa[j]-1))/2;
			}
		}
		cout<<ans;
		return 0;
	}
