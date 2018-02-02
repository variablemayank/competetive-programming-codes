#include<iostream>
using namespace std;
#define ll  unsigned long long int
int main()
{
	
         int    n;
		cin>>n;
		ll A[n];
		ll B[n];
		for(ll i=0;i<n;i++) cin>>A[i],cin>>B[i];
		for(ll i=0;i<n;i++)
		{
			ll count =0,count1=0;
			ll pas=A[i];
			ll pas1=B[i];
			while(pas!=0&&pas1!=0)
			{
			ll  rem,rem1;
			  rem=pas%2;
			  rem1=pas1%2;
			  if(rem!=rem1)
			  {
			  	count++;
			  }
			  pas=pas/2;
			  pas1=pas1/2;
			  
		    }
		    if(A[i]==B[i]) cout<<"0\n";
		    else
		    cout<<count++<<"\n";
		}
		
		return 0;
}
