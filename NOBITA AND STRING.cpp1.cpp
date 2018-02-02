#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char  s[100];
	int t;
	scanf("%d",&t);
	while(t-->=0)
	{
	   gets(s);
	   //puts(s);
	   int k=strlen(s);
	   for(int i=0;i<k;i++)
	   {
	   	
	   	   if(s[i]=='w')
	   	   {
	   	   	 int pos=i;
	   	   	 
	   		         for(int j=0;j<k;j++)
	   		         {
	   		         	char r[100];
	   		         	r[0]=s[j];
	   		         	s[j]=s[pos];
	   		         	s[pos]=r[0];
	   		         	pos++;
	   		         	
	   		        }
		   }
	   }
	   puts(s);
	}
}
