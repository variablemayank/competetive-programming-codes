#include<stdio.h>
#include<string.h>
int main()
{   
     int i,j;
	char s1[]="abcdefghijklmnopqrstuvwxyz";
	char s2[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//printf("%c",s1[25]);
    char s[30001];
	gets(s);
	int k=strlen(s);
	//printf("%d",k);
	for( i=0;s[i]!='\0';i++)
	{
	
		if(s[i]==' '&&s[i+1]>='a'&&s[i+1]<='z')
		{
		  //printf("FOund");
			for(j=0;j<26;j++)
			{
				if(s[i+1]==s1[j])
				{
					s[i+1]=s2[j];
				}
			    
			}
		}
	
	}
	for(i=0;i<26;i++)
	{
		if(s[0]==s1[i])
		{
			s[0]=s2[i];
		}
	}
	puts(s);
	
	
	return 0;
}
