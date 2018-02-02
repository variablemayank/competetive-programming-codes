#include<bits/stdc++.h>
using namespace std;

int gender[19999];
int color[19999];
vector<int>vec[199999];

void bfs(int src,int end)
{
   color[src] = end;
   queue<int> pq;
   pq.push(src);
   
   while(pq.empty()== false)
   {
   	 int u = pq.front();
   	 pq.pop();
   	 
   	 for(int i= 0;i<vec[u].size();i++ )
   	 {
   	 	  if(color[vec[u][i]]==0)
   	 	   {
   	 	   	   pq.push(vec[u][i]);
   	 	   	   
   	 	   	   if(color[u]==2)
   	 	   	   {
   	 	   	   	 color[vec[u][i]] =3;
 			   }
 			   else
 			   {
 			   	 color[vec[u][i]]= 2;
			   }
		   }
   	 }
   	 
   }
   
}
int main()
{
	int ver,edge;
	cin>>ver>>edge;
	for(int i=1;i<=ver;i++ ) 
	{
	  char str;
	  cin>>str;
	  if(str=='B')
	  {
	    gender[i] = 2;	
	  }	 
	  else
	  {
	  	gender[i] =3;
	  }
    }
    memset(color,0,sizeof(color));
	for(int i=0;i<edge;i++)
	{
		int u,v;
		cin>>u>>v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	int count =0;
	int count1=0;
	bfs(1,2);
	for(int i=1 ;i<=ver;i++)
	{
		if(gender[i]!= color[i]) count++;
	}
	memset(color,0,sizeof(color));
    for(int i=1;i<=ver;i++)
    {
    	if(color[i]!=gender[i]) count1++;
	}
	cout<<min(count,count1);
}
