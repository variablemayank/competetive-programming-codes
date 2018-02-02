#include<stdio.h>
#include<string.h>
int main()
{
	int m,t;
	char s[1000000];
	scanf("%s",s);
	m=strlen(s);
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if((s[a-1]%m)==(s[b-1]%m))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
	
}
