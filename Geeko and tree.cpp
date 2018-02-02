#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long  

int main()
{
	int t;
	ll k,a,b,m=0;
	cin>>t;
	while(t--)
	{
		k=0;
		cin>>a>>b;
	   for(ll i=0;i<=b;i++) m=m+pow(a,i);
	   while(m%10!=0)
	   {
	   	 k=m%10+k;
	   	 m=m/10;
	   }
	   cout<<k<<"\n";
	}
	return 0;
	
}
