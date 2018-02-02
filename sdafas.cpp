#include<bits/stdc++.h>
#define INF INT_MAX
 
using namespace std;
typedef pair<int, int>pa;
list<pair<int ,int> >vec[100005];
int dikstra_algo(int n ,int s,int d)
{
	vector<int> dist(n, INF);
    priority_queue< pa, vector <pa> , greater<pa> > pq;
 
    pq.push(make_pair(0, s));
    dist[s] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        list< pair<int, int> >::iterator i;
        for (i = vec[u].begin(); i != vec[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
 if(dist[d]==INT_MAX)
 return -1;
 else
    return dist[d];
}
int main()
{
	int n,m;
	scanf("%d %d ",&n,&m);
	while(m--)
	{
		int x,y;
		scanf("%d %d ",&x,&y);
		x--;
		y--;
		vec[x].push_back(make_pair(y,0));
		vec[y].push_back(make_pair(x,1));
	}
 
	int ans = dikstra_algo(n,0,n-1);
	if(ans!=-1) cout<<ans;
	else cout<<"-1";
} 
