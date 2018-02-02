#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	ios_base::sync_with_stdio(false);
//0	cin.tie(0);
//	vector<int> a(200005);
	vector<int >b(200005);
    for(int i=1;i<=n;i++)
    {
      // a[i] =i;
       b[i] =i;
	}
	while(q--)
	{
	   long long count =0;
	   int u,v;
	   cin>>u>>v;
	   swap(b[u],b[v]);
	   int j=1;
	   for(int i=1;i<=n;i++)
	   {
	   	for(int j=i+1;j<=n;j++)
	   	{
	   		if(b[i]>b[j]) count++;
		   }
	   }
	    cout<<count<<endl;
	   }
	  
	}
