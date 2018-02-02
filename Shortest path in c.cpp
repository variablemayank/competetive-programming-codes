#include<stdio.h>
#define ll long long 
int main()
{
	int t;
	ll a,b;
	scanf("%d",&t);
	while(t--)
	{
		ll result =0;
		scanf("%lld lld",&a,&b);
		while(a>1||b>1)
		{
			if(a>b)
			{result =result+a/b;
				a=a%b;}
			else
			{result =result+b/a;
				b=b%a;}
		}
		printf("%lld\n",result);
	}
	return 0;
}
