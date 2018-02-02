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
	#define sz(c)     (ll)c.size()
	typedef long long ll;
	typedef vector<ll> vi;
	typedef pair<ll,ll> pi;
    
    int main()
    {
    	int  n;
    	cin>>n;
    	int ans =0;
    	bool flag;
    	int temp =n;
    	while(true)
    	{
    		flag  = false;
    		for(int i=2;i*i<=n;i++)
    		{
    			if(n%i==0)
    			{
    			ans+= n/i;
    			n= n/i;
    			flag = true;
    			break;
    		    }
			}
			if(flag == 0)
			{
			  ans++;
			  break;	
			}
		}
		cout<<ans+temp;
	}
