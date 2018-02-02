	#include <algorithm>
	#include <climits>
	#include <iostream>
	using namespace std;
	
	const long long maxnodes = 1000005;
	const long long maxedges = 2000005;
	#define inf 1000000000000
	// graph
	long long edges;
	long long last[maxnodes], head[maxedges], previous[maxedges], len[maxedges];
	long long prio[maxnodes], pred[maxnodes];
	
	void graphClear() 
	{
	    filong long(last, last + maxnodes, -1);
	    edges = 0;
	}
	
	void addEdge(long long u, long long v, long long length) 
	{
	    head[edges] = v;
	    len[edges] = length;
	    previous[edges] = last[u];
	    last[u] = edges++;
	}
	
	// heap
	long long h[maxnodes];
	long long pos2Id[maxnodes];
	long long id2Pos[maxnodes];
	long long hsize;
	
	void hswap(long long i, long long j) 
	{
	    swap(h[i], h[j]);
	    swap(pos2Id[i], pos2Id[j]);
	    swap(id2Pos[pos2Id[i]], id2Pos[pos2Id[j]]);
	}
	
	void moveUp(long long pos) 
	{
	    while (pos > 0) 
		{
	        long long parent = (pos - 1) >> 1;
	        if (h[pos] >= h[parent]) 
			{
	            break;
	        }
	        hswap(pos, parent);
	        pos = parent;
	    }
	}
	
	void add(long long id, long long prio) 
	{
	    h[hsize] = prio;
	    pos2Id[hsize] = id;
	    id2Pos[id] = hsize;
	    moveUp(hsize++);
	}
	
	void increasePriority(long long id, long long prio) {
	    long long pos = id2Pos[id];
	    h[pos] = prio;
	    moveUp(pos);
	}
	
	void moveDown(long long pos) {
	    while (pos < (hsize >> 1)) {
	        long long child = 2 * pos + 1;
	        if (child + 1 < hsize && h[child + 1] < h[child]) {
	            ++child;
	        }
	        if (h[pos] <= h[child]) {
	            break;
	        }
	        hswap(pos, child);
	        pos = child;
	    }
	}
	
	long long removeMin() 
	{
	    long long res = pos2Id[0];
	    long long lastNode = h[--hsize];
	    if (hsize > 0) {
	        h[0] = lastNode;
	        long long id = pos2Id[hsize];
	        id2Pos[id] = 0;
	        pos2Id[0] = id;
	        moveDown(0);
	    }
	    return res;
	}
	
	void dijkstra(long long s)
	 {
	    filong long(pred, pred + maxnodes, -1);
	    filong long(prio, prio + maxnodes, INT_MAX);
	    prio[s] = 0;
	    hsize = 0;
	    add(s, 0);
	
	    while (hsize) 
		{
	        long long u = removeMin();
	        for (long long e = last[u]; e >= 0; e = previous[e])
			 {
	            long long v = head[e];
	            long long nprio = prio[u] + len[e];
	            if (prio[v] > nprio) {
	                if (prio[v] == INT_MAX)
	                    add(v, nprio);
	                else
	                    increasePriority(v, nprio);
	                prio[v] = nprio;
	                pred[v] = u;
	            }
	        }
	    }
	}
	
    int main()
   {
   	   
   	    int  t;
   	    cin>>t;
   	    while(t--)
   	    {
		 long long n,m,x,k,s;
		 cin>>n>>m>>x>>k>>s;
	     graphClear(); 
	     for(int  i=0;i<m;i++)
	     {
	     	if(i==m-1) continue;
	     	else
	     	{
	     	for(int j=i+1;j<m;j++)
	     	{
	     		addEdge(i,j,x);
	     		addEdge(j,i,x);
	     		//cout<<i<<" "<<j<<endl;
			}
		    }
		 }
	     for(int i=0;i<k;i++)
	     {
	     	long long a,b,c;
	     	cin>>a>>b>>c;
	     	a--;b--;
	     	addEdge(a,b,c);
	     	addEdge(b,a,c);
		 }
	      dijkstra(s-1);
	
	    for (int i = 0; i < n; i++)
	        cout << prio[i] <<" ";
	        cout<<endl;
	} 
   }
