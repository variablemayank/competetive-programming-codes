	#include<bits/stdc++.h>
	using namespace std;
	

    typedef long long ll; 
    ll fact[100010];
	int invfact[100010];
	const long long  MOD = 1000000007;;
	
	ll fast_exp(ll a, ll n)
	{
		ll ret =1;
		ll b = a;
		while(n)
		{
			if(n&1) 
			ret =(ret*b)%MOD;
		     b= (b*b)%MOD;
		     n>>=1;
		}
		return ll(ret);
	}
	
	void gen()
	{
		fact[0] = invfact[0]  =1;
		for(ll i=1;i<100010;i++)
		{
			fact[i] = (i*fact[i-1])%MOD;
			invfact[i] = fast_exp(fact[i],MOD-2);
		}
	}
	ll ncr(int a,int b,int p,int q)
	{ 
		int m= p-a;
		int n= q-b;
		return (((fact[m+n]*invfact[m])%MOD)*invfact[n])%MOD; 
	}
	int main()
	{
		ll ans[100010];
		gen();
		vector<pair<int,int> > p;
		
		int n,m,k;
		p.resize(k+1);
		cin>>n>>m>>k;
	    for(int i=0;i<k;i++)
		{
		   cin>>p[i].firstirst>>p[i].secondecond;	
		}
		p[k].firstirst = n ;
		p[k].secondecond = m;	
		sort(p.begin(),p.end());
		k++;
		for(int i=0;i<k;i++)
		{
			ans[i]= ncr(1,1,p[i].firstirst,p[i].secondecond);
		}
		 
		for(int i=0;i<k;i++)
		{
			for(int j=i+1;j<k;j++)
			{
				if(p[j].secondecond <p[i].secondecond || p[j].firstirst<p[i].firstirst) continue;
				
				ans[j] -= (ans[i]*ncr(p[i].firstirst,p[i].secondecond,p[j].firstirst,p[j].secondecond))%MOD;
				if(ans[j]<0) ans[j]+=MOD;
 			}
		}
		cout<<ans[k-1]<<endl;
	}
