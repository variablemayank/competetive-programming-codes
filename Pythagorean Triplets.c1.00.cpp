#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
ll A[1000000];
int main()
{
 int t;
 ll i,j,k,n;
 cin>>t;
 while(t-->0){
 cin>>n;
 ll counter=0;
//for(i=0;i<n;i++) cout<<A[i];		
  for(i=1;i<=n;i++)
	  {
	  
	  
	  for(j=2;j<=n;j++)
	  	{
	  		for(k=3;k<=n;k++)
	  		{
	  			if(i%2||j%2||k%2!=0) 
				{
				
	  			if(i/3||j/3||k/3==1)
				  {
				    
	  			if(i/4||j/4||k/4==1)
				  {
				
	  			if(i/5||j/5||k/5==1)
				  {
				    counter++;
				}
			}
		}
	}
	  			//if(pow(A[i],2)+pow(A[j],2)==pow(A[k],2)) counter++;
			}
		}
	  }
	  cout<<counter<<"\n";
}
return 0;
}
