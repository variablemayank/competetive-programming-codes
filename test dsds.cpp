    #include<bits/stdc++.h>
    using namespace std;
    
     
    #define MOD 1000000007
    #define MODSET(d) if ((d) >= MOD) d %= MOD;
    #define MODNEGSET(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
    #define MODADDSET(d) if ((d) >= MOD) d -= MOD;
    #define MODADDWHILESET(d) while ((d) >= MOD) d -= MOD;
     
    #define cint(d) scanf("%d", &d)
    #define cint2(a, b) scanf("%d %d", &a, &b)
    #define cint3(a, b, c) scanf("%d %d %d", &a, &b, &c)
    #define cint4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
     
    #define clong(d) scanf("%lld", &d)
    #define clong2(a, b) scanf("%lld %lld", &a, &b)
    #define clong3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
    #define clong4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
     
    #define pb push_back
    #define eb emplace_back
    #define mp make_pair
    #define ALL(v) (v).begin(), (v).end()
     
    using namespace std;
     
    typedef long long int slong;
    typedef pair<int, int> pii;
    typedef pair<slong, slong> pll;
   // /typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
    typedef set<int>::iterator sit;
    typedef map<int,int>::iterator mit;
    typedef vector<int>::iterator vit;
     
    #define MAXN 500000
    #define LOGN 17
     
    int n;
    vector<pair<int, int> > graph[MAXN+5];
     
    slong ans = 0;
     
    inline slong dfs(int u, int p)
    {
    	slong curr = 1;
    	
    	cout << u << ";;" << endl;
    	
    	for (auto v: graph[u])
    	{
    		if(v.first != p)
    		{
    			cout<<"v.first "<<v.first<<endl;
    			slong passed = dfs(v.first, u);
    			cout <<"u "<< u << " " <<"v.first "<< v.first << " " << "passed "<<passed << " " <<"v.second "<< v.second << endl;
    			ans += (((passed*v.second) % MOD)*curr) % MOD;
    			MODADDSET(ans);
    			
    			curr += (passed*v.second) % MOD;
    			MODADDSET(curr);
    		}
    	}
    	
    	cout <<"u "<<u << " " << "curr "<<curr <<" "<<"ans "<< ans << endl;
    	
    	return curr;
    }
     
    int main()
    {
    
    	int i, j, u, v, w;
    	
    	cint(n);
    	
    	for (i = 1; i <= n-1; i++)
    	{
    		cint3(u, v, w);
    		graph[u].pb({v, w});
    		graph[v].pb({u, w});
    	}
    	
		dfs(1, -1);
    	cout <<"ans1"<< ans << endl;
    }
