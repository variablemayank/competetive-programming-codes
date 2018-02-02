#include<bits/stdc++.h>
using namespace std;

const int maxi = 100005;
int papa[maxi];

int get(int x)
{
	return(x== papa[x]?x:papa[x]= get(papa[x]));
}

void merge(int a,int b)
{	a = get(a);
	b = get(b);
	papa[a] =b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n,m;
	 cin>>n>>m;
	 for(int i=0;i<m;i++)
	 {
	 	int u,v;
	 	cin>>u>>v;
	 	merge(u,v);
	 }
	 int count =0;
	 for(int i=1 ;i<=n;i++)
	 {
	 	if(papa[i] ==i) count++;
	 }
	 
	 cout<<count<<endl;
    }
}
