	#include <bits/stdc++.h>
	#define mp make_pair 
	#define pb push_back 
	#define fi first
	#define se second
	#define MOD 1000000007
	#define DOMOD(d) if ((d) >= MOD) d %= MOD;
	#define DONEGMOD(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
	 
	#define inp(a) scanf("%d", &a)
	#define inp2(a,b) scanf("%d %d", &a, &b)
	#define inp3(a,b,c) scanf("%d %d %d", &a, &b, &c)
	#define inp4(a,b,c,d) scanf("%d %d %d %d", &a, &b, &c, &d)
	 
	#define inpl(a) scanf("%lld", &a)
	#define inpl2(a,b) scanf("%lld %lld", &a, &b)
	#define inpl3(a,b,c) scanf("%lld %lld %lld", &a, &b, &c)
	#define inpl4(a,b,c,d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
	#define all(v) (v).begin(), (v).end()
	#define rep(i,a,b) for (int i=a;i<b;i++)
	#define mset(a,val) memset(a,val,sizeof(a))
	#define printv(v) for (int i=0;i<(int) v.size(); i++) cout<<v[i]<<" " 
	#define MAX 1000005
	using namespace std ;
	typedef long long int ll ;
	typedef pair<int,int> pii ;
	typedef pair<long long , long long > pll ;
	typedef pair<int,pii> pipi ;
	typedef pair<ll,pll> plpl ;
	typedef pair<long long, int> pli ;
	typedef pair<int,pair<int,string>> piis ;
	typedef pair<ll,string> pls ;
	 
	 
	int main()
	{
		#ifdef DHEER
	  freopen("inp.txt","r",stdin) ;
	  freopen("out.txt","w",stdout) ;
	  #endif
	  ios_base::sync_with_stdio(false) ; cin.tie(0) ;
	  int n ; cin>> n ;
	  int arr[n+1] ; 
	  for (int i=1;i<=n;i++)
	  {
		  cin>>arr[i] ;
	  }
	 
	  int q ; cin>>q ;
	  int l , r, k ;
	  map<pii,int> ans ;
	  int queries[q+1][3] ;
	  vector<int> v[1000] ;
	 
	  for (int i=1;i<=q;i++)
	  {
		  cin>>l>>r>>k ;
		  v[r].pb(k) ; v[l-1].pb(k) ; 
		  queries[i][0] = l ; queries[i][1] = r ; queries[i][2] = k  ;
	  }
	 
	  int count[1000] ; //size here is max value of k
	  mset(count,0) ;
	  for (int i=1;i<=n;i++)
	  {
		  count[arr[i]]++ ;
		  for (auto it : v[i])
		  {
			  ans[mp(it,i)] = count[it] ;
		  }
	  }
	  int temp2 ;
	  for (int i=1;i<=q;i++)
	  {
		  l = queries[i][0] ; r = queries[i][1]  ; k = queries[i][2]  ;
		  if (l == 1) temp2 = 0 ;
		  else temp2 = ans[mp(k,l-1)] ;
		  cout<<ans[mp(k,r)] - temp2<<endl ;
	  }
	 
	 
	   return 0 ;
	}
