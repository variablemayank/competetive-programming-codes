#include<bits/stdc++.h>
using namespace std;

const int MAX = 100 + 7;
string arr[MAX];
int  n, m;
int x[] = { 1, 0, -1, 0 };
int y[] = { 0, 1, 0, -1 };
bool visited[MAX][MAX];
vector < pair < int, int > > v;
//void bfs(int i, int j)

/*
void bfs(int u,int v)
{
	queue<pair<int,int> > pq;
	
	pq.push(make_pair(u,v));
	vec.push_back(make_pair(u,v));
	visited[u][v] = true;
	arr[u][v] ='.';
	
	while(pq.empty()==false)
	{
		
	pair<int,int> p= pq.front();
	pq.pop();
	for(int i=0;i<4;i++)
	{
			int ist= p.first  + x[i];
			int sec= p.second + y[i];
			
			if(ist<0 || ist>=n || sec<0 ||sec>=m) continue;
			if(arr[ist][sec]=='.')
			{
			      
				  pq.push(make_pair(ist,sec));
				  vec.push_back(make_pair(ist,sec));
				  arr[ist][sec]='.';
			}
	}
	
    }
}


int solve()
{
   memset(visited,false,sizeof(visited));
   
   for(int i=0;i<n;i++)
   {
   	 for(int j=0;j<m;j++)
   	 {
   	        if(arr[i][j]=='x' && !visited[i][j])
		   {
		     vec.clear();
			 bfs(i,j);
			 int shift  = n;
			 
			   for(int x=0; x< vec.size();x++)
			   {
			         int ist = vec[x].first;
					 int sec = vec[x].second;
					 
					 int c=0;
					 for(c = ist +1 ;c<n && arr[c][sec]=='.';c++)
					 {
					   shift = min(shift,k-ist-1);
					 }	
			   }
			   
			    for(int x=0;x<vec.size();i++)
			    {
			   	
			       int ist = vec[x].first;
			       int sec = vec[x].second;
			       arr[ist+shift][sec] = 'x';
			       visited[ist+shift][sec] =1;
				} 	
		   }	
	 }
   }
}
*/

int main()
{
	int k;
	cin>>n>>m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin>>k;
/*	for(int i=0;i<k;i++)
	{
		int t;
		cin>>t;
		int  r = n -t;
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
			{
				if(arr[r][j]=='x')
				arr[r][j] ='.';
			}
		}
		else
		{
			for(int j=m-1;j>=0;j--)
			{
				if(arr[r][j]=='x')
				arr[r][j] ='.';
			}
		}
		//solve();
	}
	*/
}
