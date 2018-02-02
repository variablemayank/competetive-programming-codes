	#include<bits/stdc++.h>
    using namespace std;
    
    
    #define ll long long 
    #define jadu ios_base::sync_with_stdio(false),cin.tie(0);
    
    ll papa[1000060];
    ll sz[1000060];
    ll deg[1000060];
    ll self[1000060];
    void init(ll n)
	{
      for(ll i=0;i<=n;i++) papa[i] = i;
	  for(ll i=0;i<=n;i++) sz[i] =1;	
	}
	
	ll get(ll x)
	{
		if(x== papa[x]) return x;
		return (papa[x] = get(papa[x]));
	}
	
	ll nc2(ll k)
	{
		return(k*(k-1))/2;
	}
	void merge(ll a,ll b)
	{
		 a= get(a);
		 b= get(b);
		 papa[a] = b;
	}
	
    main()
    {
    	jadu;
    	ll n,m;
    	cin>>n>>m;
    	init(n);
    	ll same =0;
    	for(ll i=1;i<=m;i++)
    	{
    		
           ll u,v;
           cin>>u>>v;
           if(u==v)
           {
           	  same++;
           	  self[u] =1;
		   }
		   else
		   {
		   	 deg[u]++;
		   	 deg[v]++;
		   	 u =get(u);
		   	 v= get(v);
		   	 if(u==v);
		   	 sz[v]+=u;
		   	 papa[u] = v;
		   }
		}
		ll ans =  same*1LL* (m-same);
		//cout<<ans<<endl;
	//	for(int i =1;i<=n;i++) cout<<deg[i]<<" ";
		for(ll i=1;i<=n;i++)
			ans += nc2(deg[i]);
			ans += nc2(same);
			//cout<<ans<<endl;9
		int root =1;
		for(ll i=1;i<=n;i++)
		{
		  if(sz[get(i)]>1) root = i;
		}
		for(ll i=1;i<=n;i++)
		{
			if((sz[get(i)]>1 || (sz[get(i)]==1 && self[get(i)] ))&& get(i)!=get(root))
			ans = 0;
		}
		
		cout<<ans<<endl;
		
	}
