#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
int main()
{ 
	int t,i,j,A[1000],k;
	cin>>t;
	while(t-->0)
	{
	  ll n,counter=0;
	  cin>>n;
	  for(int i=0;i<n;i++)
	  {
	  	A[i]=i+1;
	  	cout<<A[i];
	  }
	  for(i=0,j=1,k=2;i<n,j<n,k<n;i++,j++,k++)
	  {
	  
	  if(A[i]*A[i]+A[j]+A[j]==A[k]*A[k])  cout<<"hello"; //counter++;
	
      }
	
      
	  cout<<counter<<endl;
     }
     return 0;
}
