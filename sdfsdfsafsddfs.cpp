	
	#include <bits/stdc++.h>
	using namespace std;
	typedef  long long int  ll;
	#define inf (1LL<<61)
	typedef pair <long long,long long > pr;
	 
	vector <pr> graph[100005];
	long long dis[100005];
	void solve(int s,long long n)
	{
	    priority_queue <pr> pq;
	   fill(dis,dis+n+2,inf);
	   dis[s]=0;
	   pq.push(make_pair(0,s));
	   while(!pq.empty())
	   {
	     long long  wgh=-pq.top().first;
	     
	     long long u=pq.top().second;
	     pq.pop();
		   for(int i=0;i<graph[u].size();i++)
		   {
			    long long  v=graph[u][i].first;
			
			    long long wgh2=graph[u][i].second;
			    long long weight=wgh2+wgh;
			    if(weight<dis[v])
				{
			        dis[v]=weight;
			        pq.push(make_pair(-weight,v));
			    }
		   }
	   
	   }
	}
	
	int main()
	{
	   	int t;
	   
	    scanf("%d",&t);
	   	while(t--)
		   {
	   		
	   		long long n,k,x,m,s;
	   		scanf("%lld%lld%lld%lld%lld",&n,&k,&x,&m,&s);
	   		for(int i=1;i<=n;i++)
	   		graph[i].clear();
	   		
			   
			   for(int  i=1;i<=k;i++)
			   {
	   			if(i==k)
	   			continue;
	   			else
				   {
	   			for(int j=i+1;j<=k;j++)
				   {
	   				graph[i].push_back(make_pair(j,x));
			       graph[j].push_back(make_pair(i,x));//
				   }
			   }
		   }
		   for(int  i=1;i<=m;i++)
		   {
			   	long long u,v,d;
			   	
			   	scanf("%d%d%d",&u,&v,&d);
			   	
			   	graph[u].push_back(make_pair(v,d));
				graph[v].push_back(make_pair(u,d));
		   	
		   }
		   
		   solve(s,n);
		   
		   for(int i=1;i<=n;i++)
		   {
		   	if(s==i)
		    printf("%lld ",0);
		   	else
		    printf("%lld ",dis[i]);
		   }
		   
		   printf("\n");
	   }
	}
