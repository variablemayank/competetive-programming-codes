#include<bits/stdc++.h>
using namespace std;

 int a[100000],b[100000];
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		long long int n,m,x,i;
	
	scanf("%lld",&n);
	
	scanf("%lld",&m);
	
	scanf("%lld",&x);
	
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	
	for(i=0;i<m;i++)
	scanf("%lld",&b[i]);
        
        
        
    sort(a,a+n);
    sort(b,b+m);
	long long int t=0,sum=0;
	while(sum<x)
	{
		if(n>m)
            {
            for(i=0;i<n;i++)
		{
			if(a[i]>b[i])
			{
				sum=sum+b[i];
				t++;
			}
			else
			{
				sum=sum+a[i];
				t++;
			}
		}	
        }
        else
            {
            for(i=0;i<m;i++)
		{
			if(a[i]>b[i])
			{
				sum=sum+b[i];
				t++;
			}
			else
			{
				sum=sum+a[i];
				t++;
			}
		}	
        }
	}
	printf("%lld\n",t-1);
	}
	return 0;
}
