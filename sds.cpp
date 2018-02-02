#include<bits/stdc++.h>
using namespace std;
long long int n,arr[54321],sum=0;
int main()
{

	scanf("%lld",&n);
	for(int a=0;a<n;a++)
	scanf("%lld",&arr[a]);
//	sort(arr,arr+n);
	if(n==1) printf("%lld",arr[0]);
	else
	{
	sort(arr,arr+n);
	for(int b=0;b<n-1;b++)
	if(arr[b]<=arr[n-1]+arr[n-2])
    sum+=arr[b];
    
	printf("%lld\n",sum);
    }
    return 0;
}
