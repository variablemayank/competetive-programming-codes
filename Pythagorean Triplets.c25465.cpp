#include<iostream>
using namespace std;
int main()
{
	int t,sum=0;
	cin>>t;
	while(t--)
	{
		// int counter=0;
		long long int n;
		cin>>n;
		for(int i=1,  j=2,k=3;i<=n,j<=n,k<=n;i++,j++,k++)
		{
		  if(i*i==j*j+k*k) 
		  {
		    sum++;
		  }
		}
		cout<<sum<<"\n";
		
	}
}
