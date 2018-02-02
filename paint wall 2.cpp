#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 long int t,n,b[10000],i,e;
 cin>>t;
   for(x=1;x<=t;x++)
   {
   	e=0;
   	b[x]=1;
   	cin>>n;
   	
	   for(i=1;i<=n-1;i++)
   	   {
   	    b[x]=(b[x]*2)%1000000007;
   	    
	   }
	   for(i=1;i<=n;i++)
	   {
	   	e=(e+b[x]%1000000007);
	   }
	   b[x]=e;
   }
   for(i=1;i<=t;i++)
   {
   	cout<<b[i];
   }
   return 0;
 
}
