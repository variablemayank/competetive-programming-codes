	#include<bits/stdc++.h>
	using namespace std;
	
	int range(int x,int y ,int n,int m)
	{
		if(x>=0 && x<n && y>=0 &&y<m) return 1;
		return 0;
	}
	int main()
	{
		int n,m,k;
		cin>>n>>m>>k;
		string s[n];
		for(int i=0;i<n;i++)cin>>s[i];
		int arr[n][m];
		memset(arr,0,sizeof(arr));
		
		for(int i=0 ;i<n;i++)
	    {
	    	for(int j=0; j<m;j++)
	    	{
	    		if(s[i][j]=='.')
	    		arr[i][j] =1;
			}
		}
		int visited[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			visited[i][j] =0;
		}
	    queue<pair<int,int> > pq;
	    int flag =0;
	    for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<m;j++)
	    	{
	    		if(arr[i][j]==1)
	    		{
	    			pq.push({i,j});
	    			flag = 1;
	    			visited[i][j] = 1;
	    			break;
				}
			}
			if(flag) break;
		}
		
		stack<pair<int,int > > stk;
		while(!pq.empty())
		{
			pair<int,int> p = pq.front();
			stk.push(p);
			pq.pop();
			int dx[] = {1,-1,0,0};
			int dy[]= {0,0,1,-1};
			
			for(int i=0;i<4;i++)
			{
		
			int x = dx[i] +p.first;
			int y=  dy[i] +p.second;
			if(!range(x,y,n,m) || visited[x][y] ||arr[x][y]==0) continue;
			pq.push({x,y});
			visited[x][y] = true;
		    }
		}
		for(int i=0;i<k;i++)
		{
			int x = stk.top().first;
			int y = stk.top().second;
			stk.pop();
		    s[x][y]= 'X';
		}
		for(int i=0;i<n;i++) cout<<s[i]<<endl;
		
		return 0;
	}
