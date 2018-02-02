#include<bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
typedef long long ll;

ll get_commonvaluewhichisassociative(ll high,ll low)
{
	ll ist = (high*(high+1))/2;
	ll snd = (low*(low+1))/2;
	return (ist-snd)%mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll var = sqrt(n);
		ll sum=0;
		for(int i=1;i<=var;i++)
		{
			int up_bound = n/i;
			int low_bound = max(n/(i+1),var);
			sum += get_commonvaluewhichisassociative(up_bound,low_bound)*i;
			sum%=mod;
			sum += (n/i)*i;
			sum%=mod;
		}
		cout<<sum<<endl;
	}
}
