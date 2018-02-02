#include<iostream>
using namespace std;
long long fact(long long x)
{
	if(x==1)
	return 1;
	else
	return x*fact(x-1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,val,count=0;
		cin>>n;
		val=fact(n);
		//cout<<val;
		for(long long int i=1;i<=val;i++)
		  {
		  if(val%i==0)
		  {
		  
		  count++;
	      }
		  }
		  cout<<count<<endl;
			  }
		
	}
	

