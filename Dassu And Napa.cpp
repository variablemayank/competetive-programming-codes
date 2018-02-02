	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (ll i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	typedef long long ll;
	typedef vector<ll> vi;
	typedef pair<ll,ll> pi;
    
    const ll mod = 1000000007;
	const ll maxi =1005;

	//ll arr[maxi];
//	ll brr[maxi];
//	ll crr[maxi];
//	ll n,m,k;
	
	 main()
	{
		map<pi,ll> mp;
		map<pi,ll>::iterator it;
        ll n,m,p;
        cin>>n>>m>>p;
        for(ll i=0;i<p;i++)
        {
           ll a,b;
           cin>>a>>b;
           mp[{a,b}]++;
		}
		ll soln = 0;
		for(it= mp.begin();it!=mp.end();it++)
		{
		   pair<ll,ll> p = it->first;
		   ll s = it->second;
		   
		   ll dist = abs(p.first-1) +abs(p.second- m);
		   if(dist%2==0) continue;
		   soln= soln^s;
		}
		if(soln) cout<<"Yes";
		else cout<<"No";
	}
