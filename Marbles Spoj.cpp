#include<bits/stdc++.h>
using namespace std;

long long solve(long long n,long long k)
{
	long long result =1;
	if(k>n/2)
	{
		k= n-k;
	}
	for(int i=0;i<k;i++)
	{
		result*= n;
		result/= (i+1);
		n--;
	}
	return result;
}
int main()
{
	int  t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,k;
		scanf("%lld%lld",&n,&k);
		printf("%lld\n",solve(n-1,k-1));				
	}
	system("pause");
}

