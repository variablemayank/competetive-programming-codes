	#include<bits/stdc++.h>
	using namespace std;
	
	const int maxi = 54321;
	int papa[maxi];
	int from[maxi],to[maxi];
	int range[maxi];
	bool visited[maxi];
	void init(int n)
	{
		for(int i=0;i<=n;i++)
		{
			papa[i] =i;
		}
	}
	int get(int x)
	{
		return(x==papa[x]?x:papa[x] =get(papa[x]));
	}
	int main()
	{
		int n,m;
	    cin>>n>>m;
	    for(int i=1;i<=m;i++)
	    {   
	    	 cin>>from[i]>>to[i];
		} 
		init(n);
		int k=0;
		for(int i=1;i<=m;i++)
		{
			int x= get(from[i]);
			int y = get(to[i]);
			if(x!=y)
			{
				range[k++] =i;
				visited[i] = true;
				papa[x] =y;
			}
		}
		init(n);
		for(int i=m;i>=1;i--)
		{
			int x= get(from[i]);
			int y= get(to[i]);
		    if(x!=y)
		    {
		    	if(!visited[i])
		    	{
		    		visited[i] = true;
		    		range[k++] =i;
				}
				papa[x] =y;
			}
		}
		int q;
		cin>>q;
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			init(n);
			for(int i=0;i<k;i++)
			{
				if(range[i]<l || range[i]>r)
				{
					int x = get(from[range[i]]);
					int y=  get(to[range[i]]);
					if(x !=y)
					{
						papa[x] =y;
					}
				}
			}
			
			int ans(0);
			for(int i=1 ;i<= n;i++)
			{
				if(papa[i] == i ) ans++;
			}
			cout<<ans<<endl;
		}
	}
