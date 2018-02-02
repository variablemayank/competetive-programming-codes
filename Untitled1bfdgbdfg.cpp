#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	char  s1;
	char  s2;
	scanf("%d",&t); 
	while(t--)
	{
	scanf("%d",&s1);
	scanf("%d",&s2);
		int m=strlen(s1);
		int n=strlen(s2);
		int k=strcmp(s1,s2);
		if(k<0)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(s2[i]==s[j])
					{
						s3[i]=s[j];
					}
					
				}
				cout<<s1+s3;
				
			}
		}
	}
	return 0;

}
