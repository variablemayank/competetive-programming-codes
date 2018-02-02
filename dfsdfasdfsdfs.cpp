	    #include<bits/stdc++.h>
		using namespace std;
			
		#define jadu ios_base::sync_with_stdio(false);
		#define rep(i,a,b) for (int i = a; i <= b; i++)
		#define f first
		#define s second
		#define lelo(x) scanf("%d",&x);
		#define dedo(x) printf("%d",x); 	
		#define PB push_back
		#define MP make_pair
		#define sz(c)     (int)c.size()
		typedef long long ll;
		typedef vector<int> vi;
		typedef pair<int,int> pi;
		const int mod = 1000000007;
		#define trace1(x)                cerr<<#x<<": "<<x<<endl
		#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
		#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
		#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
		#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
		#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
		template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
		template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }
		
		const int maxi = 200000;
		ll ans[2*maxi];
		ll inf = 1e14;
		struct P
		{
		  int st;
		  int co;
		  int t;
		  ll cost;
		}test[3*maxi];
		 
		bool compare(P l,P r)
		{
		  if(l.co!=r.co)
		    return l.co<r.co;
		  return l.st<r.st;
		}
		 
		int main()
		{
		  int n,x;
		  scanf("%d%d",&n,&x);
		  int l,r;
		  ll cost;
		  int j=0;
		  for(int i=1;i<=n;i++)
		  {
		    scanf("%d%d%lld",&l,&r,&cost);
		    j++;
		    test[j].st=-1;
			test[j].co=l;
			test[j].t=r-l+1;
			test[j].cost=cost;
		    j++;
		    test[j].st=1;
			test[j].co=r;
			test[j].t=r-l+1;
			test[j].cost=cost;
		 
		  }
		  for(int i=0;i<=maxi+5;i++)
		    ans[i]= inf;
		    
		  sort(test+1,test+2*n+1,compare);
		  
		  ll var= inf;
		 
		  for(int i=1;i<=2*n;i++)
		  {
			     cost=test[i].cost;
			     int st=test[i].st;
			     int ti=test[i].t;
			    
			     if(st==-1) 
			     {
			         if(ti<x)
			         {
					 
			          var = min(var,cost+ans[x-ti]);
			         }
			     }
			     else
			     {
			         if(ti<x)
			         {
					 
			         ans[ti]=min(ans[ti],cost);
			         }
			 
			     }
		  }
		  if(var>=inf)
		  { 
		   return cout<<"-1",0;
		  }
		    
		  else return cout<<var,0;
		 
		}
