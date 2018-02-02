	
	#include<bits/stdc++.h>
	using namespace std;
	
	#define TRACE
	#ifdef TRACE
	#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
	template <typename Arg1>
	void __f(const char* name, Arg1&& arg1){
	  cerr << name << " : " << arg1 << std::endl;
	}
	template <typename Arg1, typename... Args>
	void __f(const char* names, Arg1&& arg1, Args&&... args){
	  const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
	}
	#else
	#define trace(...)
	#endif
	
	#define si(x) scanf("%d",&x)
	#define sll(x) scanf("%lld",&x)
	#define pi(x) printf("%d\n",x)
	#define F first
	#define S second
	#define PB push_back
	#define MP make_pair
	
	typedef long long LL;
	typedef pair<int,int> PII;
	typedef vector<int> VI;
	typedef vector<PII> VPII;
	
	int N,M,C;
	int q;
	
	VPII EC[40];
	
	int P[100000];
	
	int ANS[100000];
	PII Q[100000];
	
	int par(int x)
	{
	  if(P[x] != x)
	    P[x] = par(P[x]);
	  return P[x];
	}
	
	void add(int x, int y)
	{
	  x = par(x); y = par(y);
	  if(x==y)return;
	  P[x] = y;
	}
	
	int main()
	{
	  si(N); si(M); si(C);
	  for(int i =0; i<M; i++)
	  {
	    int x,y,c;
	    si(x); si(y); si(c);
	    x--; y--; c--; 
	    EC[c].PB({x,y});
	  }
	  
	  si(q);
	  for(int i = 0; i<q; i++)
	  {
	    si(Q[i].F); si(Q[i].S);
	    Q[i].F--; Q[i].S--;
	  }
	
	  for(int c = 0; c < C; c++)
	  {
	    for(int i = 0; i<N; i++)
	      P[i] = i; 
	    for(int cc = 0; cc < C; cc++)
	      if(cc != c)
	      {
	        for(auto p : EC[cc])
	          add(p.F, p.S);
	      }
	    for(int i = 0; i<q; i++)
	      if(par(Q[i].F) != par(Q[i].S))
	        ANS[i]++;
	  }
	
	  for(int i = 0; i<N; i++)
	    P[i] = i; 
	  for(int cc = 0; cc < C; cc++)
	  {
	    for(auto p : EC[cc])
	      add(p.F, p.S);
	  }    
	  for(int i = 0; i<q; i++)
	    if(par(Q[i].F) != par(Q[i].S))
	        ANS[i] = 0;
	      
	  for(int i=0; i<q; i++)
	    cout << ANS[i] << endl;
	
	  return 0;	
	}
