#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
int sol[555][555];
int main()
{
	
	for(int i=0;i<555;i++)
	{
	     for(int j=0;j<555;j++)
	     	sol[i][j] = mod;
	     	
	     	sol[i][i] =0;
    }
	int n,m;
	cin>>n>>m;
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		sol[a][b]= min(sol[a][b],0);
		sol[b][a]= min(sol[b][a],1);
	}
	for(int k=0;k<=n;k++)
	{
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				sol[i][j] = min(sol[i][j],sol[i][k]+sol[k][j]);
			}
		}
	}
	int source,destination;
	cin>>source>>destination;
	int ans = sol[source][destination];
	if(ans>=mod)
	{
		cout<<"-1";
	}
	else cout<<ans;
}
