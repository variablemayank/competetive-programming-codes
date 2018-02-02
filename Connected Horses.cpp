#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll arr[1003][1003],n,m;
bool visited[1003][1003];

const ll mod =1e9+7;
ll facto[1000006];

ll dist[8][2] = {{-2,+1},{-2,-1},{+2,+1},{-1,2},{-1,-2},{+1,-2},{+1,+2},{+2,-1}};
ll sum;
void fact()
{
	facto[0] = 1;
	for(ll i=1;i<=1000006;i++)
	{
	   facto[i] = (facto[i-1]*i)%mod;
	}
}
void sol(ll u,ll v)
{
	if(visited[u][v]== true) return;
	sum++;
	visited[u][v] =true;
	for(ll i=0;i<8;i++)
	{
		ll x= u + dist[i][0];
		ll y= v + dist[i][1];
		
		if(x<=0 ||x> n || y<=0 || y>m) continue;
		if(!visited[x][y] && arr[x][y] ==1)
		{
			sol(x,y);
		}
	}
     
}
 main()
{
	fact();
	ll t;
	cin>>t;
	while(t--)
	{
		memset(visited,false,sizeof(visited));
		memset(arr,0,sizeof(arr));
		ll q;
		cin>>n>>m>>q;
		for(ll i=0;i<q;i++)
		{
			ll u,v;
			cin>>u>>v;
			arr[u][v] =1;
		}
		long long ans =1LL;
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=m;j++)
			{
				
				if(!visited[i][j] && arr[i][j]==1)
				{
					sum =0;
					sol(i,j);
					ans =(ans *facto[sum])%mod;
				}
				///cout<<ans<<endl;
			}
		}
		cout<<ans<<endl;
	}
}
