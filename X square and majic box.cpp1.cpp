#include<stdio.h>
int main()
{
	long long int t,i;
	scanf("%lld",&t);
	while(t--)
	{
		char x[1000000]={};
		scanf("%s",x);
		long long int count[26]={0},f;
		i=0,f=0;
		while(x[i]!='\0')
		{
			count[x[i]-'a']++;
			i++;
		}
		for(i=0;i<26;i++)
		printf("%d\n",count[0]);
		for(i=0;i<26;i++)
		{
			if(count[i]%2==0)
			f=1;
			else
			{
				f=0;
				break;
			}
		}
		if(f==1)
		printf("1\n");
		else
		printf("-1\n");
	}
	return 0;
}
