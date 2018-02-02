#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b[100],c=0,l,t=1;
	char s[100]; 
	printf("Enter your string \n");
	gets(s);
	l=strlen(s);
	
	while(c<l)
	{
		if(s[c]==s[c-1] && c>0 )
	    {
	    	
	    	b[c]=(s[c]-96)*t;
	    	t++;
	    	c++;
	    	continue;
		}
		else 
	    {
	    t=1;
		b[c]=s[c]-96;
	    }
		
		c++;
	}
	for(int i=0;i<l;i++)
	printf("%d\n",b[i]);
	return 0;
}


