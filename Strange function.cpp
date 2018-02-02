#include<iostream>
using namespace std;
#define ll  unsigned long long 						
int main()
{
	ll  n,c,A[10000000],sum=0;
	cin>>n>>c;
	for(ll i=0;i<n;i++) cin>>A[i];
	for(ll i=0;i<n;i++) sum=sum+A[i];
	cout<<(n*n+n)/2*c+sum<<"\n";
	return 0;
	
}
