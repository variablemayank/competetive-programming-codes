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
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;

	const int maxi =1005;
	
	int pipe_out[maxi],pipe_in[maxi],diam[maxi];
	int main()
	{
		jadu;
		int houses,connection;
		cin>>houses>>connection;
		for(int i=0;i<connection;i++)
		{
			int u,v,w;
			cin>>u>>v>>w;
			pipe_out[u] = v;
			pipe_in[v] =  u;
			diam[u] = w;
		}
		int count =0;
		for(int i=1;i<=houses;i++)
		if(!pipe_in[i] && pipe_out[i]) count++;
		
		cout<<count<<endl;
		for(int i=1;i<=houses;i++)
		{
			if(!pipe_in[i] && pipe_out[i])
			{
			   int x= i,y= INT_MAX;
			   
			   while(pipe_out[x])
			   {
			   	  y = min(y,diam[x]);
			   	  x= pipe_out[x];; // going in the depth
			   	  // applying depth search
			   	  // to the next connected pipe to
			   	  // it
			   }
			   cout<<i<<" "<<x<<" "<<y<<endl;
			}
		}
	}
