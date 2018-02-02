#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	for(int test=0;test<t;test++)
	{
		long long a,b,c,k;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
		for(int i=0;i<100001;i++)
		{
			int K= a*(i*i)+(b*i)+c;
			if(K>=k) 
			{
			
			printf("%d",i);
			break;
			
		    }
		}
	}
}
