#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count =0;
	int sum1=0 ;
	int sum2=0;
	while(n)
	{
	    
		if(n%2==0)
		{
			count++;
			
		    if(!(count&1)) sum1+= n/2;
	         else sum2+= (n+1)/2;
	    	n =n/2;
		}
		else
	    {
	    	count++;
	    	if((count%2!=0)) sum1+= (n+1)/2;
	        else sum2 += (n+1)/2;
	    
	    	n-= (n+1)/2;
		}
	}
	//cout<<sum1<<sum2<<endl;
	if(count%2!=0 ||(sum1>=sum2))
	{
		 cout<<sum1;
	}
	else cout<<"-1";
	
	return 0;
	//bye bye	 
		 
}	 
