#include<bits/stdc++.h>
using  namespace std;

const int MOD =1000000007;
typedef long long ll;

map<ll,int> mp;
map<ll,int>::iterator it;

ll fast_exp(ll m, ll n, ll mod)
{
    ll ans = 1, p = m;
    while (n)
    {
        if (n & 1)
        {
            ans *= p;
            ans %= mod;
        }
        p *= p;
        p %= mod;
        n >>= 1;
    }
    return ans;
}

int main()
{
    int n; 
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	ll val;
    	cin>>val;
    	it = mp.find(val);
    	if(it == mp.end())  // means variable doesnt belongs to map so insert it
    	{
    		mp.insert(make_pair(val,1));
		}
		else it->second++; // increasing the frequency of the elements wowhooo :D
	}
	//for(it = mp.begin();it!= mp.end();it++) cout<<it->first<<" "<<it->second<<endl;
	bool ev = false;  // checking ev value or not if it is ev then it will make the whole (x+1)(x+2) ev or odd
	ll dn =1 ;
	for( it = mp.begin();it!= mp.end();it++)
	{
		 if(!ev &&((it->second)%2==1)) 
		 {
		 	dn  *=  (it->second +1)>>1;
		 	if(dn>=MOD-1)
		 	dn %=(MOD-1);
		 	ev = true;
		 	//cout<<dn<<endl;
		 }
		 else
		 {
		 	dn *=  (it->second+1);
		 	if(dn>=MOD-1)
		 	dn%= MOD-1;
		 	//cout<<dn<<endl;
		 }
	}
	//cout<<dn<<endl;
	ll p =1,ans =1;
	for( it = mp.begin();it!= mp.end();it++)
	{
		p = (dn * (it->second) >> (ev==true ? 0 :1)) % (MOD-1);
		ans *= fast_exp(it->first,p,MOD);
		ans %= MOD;
	}
	cout<<ans<<endl;
	return 0;
    
}
