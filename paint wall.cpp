#include<stdio.h>
#include<math.h>
long long int mod= 1000000007;
int main()
{
	long int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		m=3*pow(2,n-1);
		printf("%d\n",m%mod);
	}
	return 0;
}
