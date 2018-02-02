#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int num;
	while(cin>>num &&num!=0) 
	{ 
                 int count = 0, copy = num;
		 int i = 2, rt;
		 rt = (int)sqrt( num );
                 printf("%d = ",num);
		 while( i<=rt && copy!=0 ) 
		 {
		      if( copy%i==0 ) 
			  {
	                while( copy%i==0 ) 
					{
		   	         copy /= i; 
                    if( copy!=1 ) printf("%d * ",i);
                    else printf("%d",i);
			        }
			  }
             if( num%i==0 ) count++; 
		     i++;
		}
        if( copy!=1 ) printf("%d\n",copy);
        else printf("\n");
	    printf("With %d marbles, %d different rectangles can be constructed.\n",num,count+1);
	}
	return 0;
}
