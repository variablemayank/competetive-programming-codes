#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ll n;
	scanf("%lld",&n);
	ll A[n];
	for(int i=0;i<n;i++) scanf("%lld",&A[i]);
    ll compute = (n-1)+(n/2);
    if(n==3) cout<<n<<endl;
    if(n==2) cout<<n-1<<endl;
    else
    printf("%lld\n",compute);
    
}
