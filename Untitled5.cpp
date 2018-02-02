#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t-->=0)
	{
	   char s[100];
	   
	   gets(s);
	   
	   int len= strlen(s);
	   
	   for(int i=0;i<len;i++)
	   {
	   	 
	   	     if(s[i]=='w')
	   	     {   
	   	     int k=len-i;
	   	     int pos=i;
	   	  	           for(int j=0;j<=k;j++)
	   	  	          {
	   	  	     	    char s1[5];
	   	  	     	     int o=0;
	   	  	     	     s1[0]=s[pos];
	   	  	     	     s[j]= s[pos];
	   	  	     	    s[pos]=s1[o];
	   	  	     	    pos++;
	   	  	            o++;
	   	  	     	    
					  }
	   	  	   
			 }
	   	 
	   	 
	   	 
	   }
	   puts(s);
	}
}
