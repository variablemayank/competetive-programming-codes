#include<bits/stdc++.h>
using namespace std;

#define jadu ios_base::sync_with_stdio(false),cin.tie(0);
int dist[1050];
vector<int> vec[1050];
int update(int x)
{
		for(int i=0;i<vec[x].size();i++)
		{
			int bro = vec[x][i];
			//cout<<"bro1"<<bro<<endl;
			if(dist[bro]> dist[x]+1) // considering this case if 1e9
			{
			//	cout<<"bro"<<bro<<"bro"<<dist[bro]<<endl;
			//	cout<<"dist[x]"<<dist[x]<<"x"<<x<<endl;
				dist[bro] =dist[x] +1;
				update(bro); //Going to every friend of bro 
			}
		}
}
int main()
{
	jadu;
	int n,m;
	cin>>n>>m;
    for(int i=2;i<=1050;i++) dist[i] =1e9;  
	while(m--)
	{
		int q;
		cin>>q;
		if(q==1)
		{
			int x;
			cin>>x;
			// edge 1->x;
			if(dist[x]>1e8) 
			{
				cout<<"-1\n";
			}
			else
			{
				cout<<dist[x]<<endl;
			}
			
		}
		else
		{
			int a,b;
			cin>>a>>b;
			vec[a].push_back(b);
			if(dist[b]> dist[a]+1)
			{
				dist[b] = dist[a]+1;
				update(b);
			}
		}
	}
	return 0;
	
}
