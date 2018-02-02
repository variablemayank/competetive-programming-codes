#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > v;
int n,m,k;
int arr[100005],brr[100005],weigh[100005];
int parent[100005];

int get(int x)
{
   if(parent[x]==x)
   return x;
   return (parent[x]==get(parent[x]));	
}
void merge(int a,int b)
{
	parent[a] =b;
}
int main()
{
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=m;i++)
	{
		cin>>arr[i]>>brr[i]>>weigh[i];
		v.push_back(make_pair(weigh[i],i));
	}
	sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=1;i<=n;i++) parent[i] =i;
    int ans =0;
    vector<int> soln;
    for(int i=0;i<v.size();i++)
    {
    	int id = v[i].second;
    	int q,w;
    	q  = arr[id];
        w=   brr[id];
        q = get(q);
        w = get(w);
        if(q!=w)
        {
        	ans+= weigh[id];
        	soln.push_back(id);
        	merge(q,w);
        
		}
	
	}
	cout<<ans<<endl;
	cout<<soln.size()<<endl;
	for(int i=0;i<soln.size();i++)
	{
		cout<<soln[i]<<" ";
	}
}
