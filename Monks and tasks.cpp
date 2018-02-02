#include<iostream>
using namespace std;
#define ll long long
int main()
{
	int t;	
	cin>>t;
	while(t-->0)
	{
	
		ll   n;
		cin>>n;
		int A[100];
		int B[n];
		for(ll i=0;i<n;i++) cin>>A[i];
		for(ll i=0;i<n;i++)
		{
			int count =0;
			int pas=A[i];
			while(pas!=0)
			{
				int rem;
			  rem=pas%2;
			  if(rem==1)
			  {
			  	count++;
			  }
			  pas=pas/2;
			  
		    }
		    B[i]
			=count;
		    
		}
		cout<<"\n";
		for(ll i=0;i<n;i++) cout<<B[i]<<"\n";
	}
}
