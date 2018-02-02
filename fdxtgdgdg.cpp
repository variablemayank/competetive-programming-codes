#include<bits/stdc++.h>
using namespace std;
#define ll unsigned  long long 
ll A[1000000000];
int main()
{ 
	int t;
	ll i,j,k;
	cin>>t;
	
	while(t-->0)
	{
	  ll n,counter=0;
	  cin>>n;
	  for(i=0;i<n;i++) A[i]=i+1;
	  for(i=0;i<n;i++)
	  {
	  	for(j=1;j<n;j++)
	  	{
	  		for(k=2;k<n;k++)
	  		{
	  			if(A[i]*A[i]+A[j]*A[j]==A[k]*A[k]) counter++;
			}
		}
	  }
	  cout<<counter/2<<"\n";
    }
return 0;
 }
