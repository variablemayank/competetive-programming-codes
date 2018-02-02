	
	
	#include<bits/stdc++.h>
	using namespace std;
	
	const int mod = 1e9+7;
	#define ll long long 
	#define jadu ios_base::sync_with_stdio(false);
    ll sum =0;
    ll n;
	ll papa[1000006];
	struct node
	{
		ll des;
		ll src;
		ll wgt;
	};
	vector<node> graph;
    inline void mult(ll c[], const ll a[], const ll b[])
    {
    	int x1 = (a[0] * b[0] + a[1] * b[2]) % mod;
    	int x2 = (a[0] * b[1] + a[1] * b[3]) % mod;
    	int x3 = (a[2] * b[0] + a[3] * b[2]) % mod;
    	int x4 = (a[2] * b[1] + a[3] * b[3]) % mod;
    	c[0] = x1; c[1] = x2; c[2] = x3; c[3] = x4;
    }
    ll fib(ll n)
    {
                ll res[4];
    			ll c[4];
    			res[0] = 1; res[1] = 0;
    			res[2] = 0; res[3] = 1;
    			c[0] = 1; c[1] = 1;
    			c[2] = 1; c[3] = 0;
    			while(n > 0)
    			{
    				if(n & 1)
    					mult(res, res, c);
    				mult(c, c, c);
    				n /= 2;
    			}
    			return res[1];
    }
	void init()
	{
		for(int i=0;i<n*n;i++) papa[i] =i;
		
	}
	ll get(int x)
	{
	 if(x==papa[x]) return x;
	 return (papa[x] = papa[x]);
    }
	void merge(int x,int y)
	{
		x =get(x);
		y= get(y);
		papa[x] = y;
	}
	bool compare(node a,node b)
	{
		return a.wgt<b.wgt;
	}
    int find_par(int x)
    {
        return (x == papa[x])?x:papa[x]=find_par(papa[x]);
    }
    void kruskal()
    {
        init();
        sort(graph.begin(),graph.end(),compare);
        for(int i=0;i<graph.size();i++)
        {
            int pu = find_par(graph[i].src);
            int pv = find_par(graph[i].des);
            if(pu != pv)
            {
                sum += graph[i].wgt;
                papa[pu] = pv;
            }
        }
    }
	int main()
	{
	       jadu; // haha
	      // ll n;
	       cin>>n;
	       int k1,k2,k3,k4;
	       cin>>k1>>k2>>k3>>k4;
	
	       node ns;
	        ll fk1 = fib(k1) , fk2 = fib(k2) , fk3 = fib(k3) , fk4 = fib(k4);
		           ll fk_1 = fib(k1-1) , fk_2 = fib(k2-1) , fk_3 = fib(k3 - 1), fk_4 = fib(k4 - 1);
		        for(int i=0;i<n;i++)
		        {
		            for(int j=0;j<n;j++)
		            {
		                int u = n*i + j ,v;
		                int w = 0;
		                if(j < n-1)
		                {
		                    v = n*i + j + 1;
		                    w = (fk1 + fk2)%mod;
		                    ll tmp = fk1;
		                    fk1 += fk_1;
		                    if(fk1 >= mod)
		                        fk1 %= mod;
		                    fk_1 = tmp;
		                    tmp = fk2;
		                    fk2 += fk_2;
		                    if(fk2 >= mod)
		                        fk2 %= mod;
		                    fk_2 = tmp;
		                    ns.des  =v;
		                    ns.src = u;
		                    ns.wgt  =w;
		                    graph.push_back(ns);
		                }
		            }
		        }
		        for(int j=0;j<n;j++)
		        {
		            for(int i=0;i<n;i++)
		            {
		                int u = n*i + j ,v;
		                int w = 0;
		                if(i < n-1)
		                {
		                    v = n*(i+1) + j;
		                    w = (fk3 + fk4)%mod;
		                    ns.src = u;
		                    ns.des =v;
		                    ns.wgt = w;
		                    graph.push_back(ns);
		                    ll tmp = fk3;
		                    fk3 += fk_3;
		                    if(fk3 >= mod)
		                        fk3 %= mod;
		                    fk_3 = tmp;
		                    tmp = fk4;
		                    fk4 += fk_4;
		                    if(fk4 >= mod)
		                        fk4 %= mod;
		                    fk_4 = tmp;
		                }
		            }
		        }
		   //init();
		  
		  // for(int i=0;i<graph.size();i++)
		  // {
		  // 	cout<<graph[i].src<<" "<<graph[i].des<<endl;
		  // }
		   
		    kruskal();
		   cout<<sum<<endl;
	}
