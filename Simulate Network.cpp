#include<bits/stdc++.h>
using namespace std;

#define all(x)  x.begin(),x.end()
#define jadu ios_base::sync_with_stdio(false),cin.tie(0);
struct node
{
	int src;
	int des;
	int wht;
};

vector<node> graph;
vector<int> tree;
int papa[100005];
int lat[100005];

bool compare(node n1,node n2)
{
	return n1.wht<n2.wht;
}
void init()
{
	for(int i=0;i<100005;i++) papa[i] =i;

}
int get(int x)
{
	if(x== papa[x]) return papa[x];
	return papa[x] = get(papa[x]);
}
void merge(int x,int y)
{
	 x = get(x);
	 y = get(y);
	 papa[x] = papa[y];
}
void kruskal()
{
	for(int i=0;i<graph.size();i++)
	{
		int x= graph[i].src;
		int y= graph[i].des;
		int w= graph[i].wht;
		if(get(x)!= get(y))
		{
			merge(x,y);
			tree.push_back(w);
		}
	}
}
int main()
{
	int  n,m;
	cin>>n>>m;
	node ns;
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>ns.des>>ns.src>>ns.wht;
		graph.push_back(ns);
	}
	init();
	sort(all(graph),compare);
	kruskal();
	int q;
	cin>>q;

	for(int i=0;i<q;i++) cin>>lat[i];
	sort(lat,lat+q);
	int ans =0;
	int j=0;
	int k=0;
	int i=0;
	for(i=0;i<tree.size() && j<q && k<n-1;)
	{
		if(tree[i]<=lat[j])
		{
			ans+= tree[i];
			i++;
			
		}
		else
		{
			ans += lat[j];
			j++;
			
		}
		k++;
	}
	while(k<n-1 && i<tree.size())
	{
	 ans+= tree[i++];
	 k++;
	}
	cout<<ans<<endl;
	
	
}
