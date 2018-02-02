#include<stdio.h>

int max(int a,int b)
{
	if(a>b)
	return a;
	else return b;
}
int main()
{
	
	char s[256];
	scanf("%d",&n);
    gets(s);
    int maxi =0;
    int count =0;
    for(int i=0;i<n;i++)
      {
      	  if(s[i]==' ')
      	  {
      	       maxi = max(maxi,count);	
      	       count =0;
		  }
		  if(s[i]>=65 & s[i]<=91)
		  {
		  	 count++;
		  }
		  
	
	  }
	  printf("%d",count);
	
}
