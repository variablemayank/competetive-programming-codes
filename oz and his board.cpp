#include<stdio.h>
int main()
{
	long long int i,j,n,t,m,a,b,c,ans,p,q;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld%lld%lld%lld",&n,&m,&a,&b,&c);
		if(c>a||c>b)
		{
			p=n*a+m*b;
			if(m>=n)
			{
				q=n*c+n*c+(m-n)*b;
			}
			if(m<n)
			{
				q=m*c+m*c+(n-m)*a;
			}
			if(p>=q)
			ans=p;
			if(p<q)
			ans=q;
			
		}
		else
		{
			ans=n*a+m*b;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
