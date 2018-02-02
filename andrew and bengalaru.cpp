#include<iostream>
#define MAX 1000000007
using namespace std;
#define ll long long  unsigned
ll A[10000007];
int main()
{
   int t;
ll k;
   cin>>t;
   while(t--)
   {
   	ll sum=0;
   	 cin>>k;
   	 for(int i=0;i<k;i++)
   	 {
   	 	cin>>A[i];
     }
     for(int  i=0,j=1;i<k,j<k-1;i++,j++)
     {
     	if(A[j]<A[i]&&A[j]>A[i+2]&&A[i+2]<A[i+3])
     	sum=sum+A[j]-A[i+2];
     	//cout<<sum;
    
	    if(A[j]<A[i]&&A[j]<A[i+2])
	     sum=sum+min(A[i],A[i+2]);

	 }
	 cout<<sum%MAX<<endl;
   }
   return 0;
}
