#include<bits/stdc++.h>
using namespace std;

int parent[100005];
inline find(int x)
{
	return x==parent[x]?x:parent[x]=find(parent[x]);
}

class GCDGraph{
	
	public:
		string possible(int nodes,int k,int sour,int des)
		{
			for(int i=0;i<=nodes;i++) parent[i]=i;
			
			for(int i=2;i<=nodes;i++)
			{
				for(int j=i+i;j<=nodes;j+=i)
				{
					if(j/i>k)
					{
						parent[find(j)]  = find(j/i);
					}
				}
			}
			if(find(sour)==find(des)) return "Possible";
			else return "Impossible";
		}
		
}a;

int main()
{
	cout<<a.possible(12,2,8,9);
	
}
