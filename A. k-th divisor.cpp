	#include<bits/stdc++.h>
	using namespace std;
	
	typedef long long ll;
	
	vector<ll> div(ll n)
	{
		vector<ll > vec;
		for(ll i=1;i*i<=n;i++)
			if(n%i==0)
			{
				if(n/i==i)
				{
				  vec.push_back(i);
				}
				else
				{
					vec.push_back(n/i);
					vec.push_back(i);
				}
			}
		
		return vec;
	}
	int main()
	{
		
		ll n,k;
		scanf("%I64d%I64d",&n,&k);
		vector<ll> sol = div(n);
		stable_sort(sol.begin(),sol.end());
		//for(ll i=0;i<sol.size();i++) cout<<sol[i]<<" ";
		if(k>sol.size()) cout<<"-1";
		else 
	 	cout<<sol[k-1]<<endl;
		
	}
