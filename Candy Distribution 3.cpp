#include<bits/stdc++.h>
using namespace std;

const int mod  =1000000007;
typedef long long ll;

//ll fast_exp(ll a, ll b)

ll pow2[1000006],pow3[1000006];

void solve()
{
    pow2[0] = 1;
	pow3[0] = 1;
	for(int i=1;i<=1000000;i++)
	{
	  pow2[i] = (2*pow2[i-1])%mod;
	  pow3[i] = (3*pow3[i-1])%mod;	
	}    
}

int main()
{ 
   solve();
   int t;
   scanf("%d",&t);
    while(t--)
    {
   	 int n;
   	 scanf("%d",&n);
   	 ll ans = (pow2[n]*pow2[n]);
   	 ans -= 2*(pow3[n]);
   	 if(ans<0)
   	 ans+= mod;
   	 ans+= pow2[n];
   	 if(ans>=mod)
   	 ans = ans%mod;
   	 
   	 printf("%lld\n",ans);
	}
}
