#include<bits/stdc++.h>
using namespace std;

 int MAX =1e5;
int main()
{
	long long arr[MAX];
	long long t;
	scanf("%lld",&t);
	
	long sum=0;
	for(int i=0;i<t;i++) 
	{
		long long   var;
		scanf("%lld",&var);
		arr[i]=sum+var;
		sum =sum+x;
	}
	int q;
	scanf("%lld",&q);
	while(q--)
	{
		int l,r;
		scanf("%lld%lld",&l,&r);
		printf("%lld",arr[l-1]-arr[r-1]);
		printf("\n");
	}
}
