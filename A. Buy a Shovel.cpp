#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,change,val;
	scanf("%d%d",&k,&change);
	if(k%10==0)
	{
		printf("1\n");
		
	}
	else if(k%10==change)
	{
		printf("1\n");
	}
	else
	{
		for(int i=2;i<=1000;i++)
		{
			if((k*i)%10==0)
			{
				printf("%d\n",i);
				break;
			}
			if((k*i)%10==change)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}
