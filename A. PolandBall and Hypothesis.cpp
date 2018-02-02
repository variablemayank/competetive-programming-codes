#include<bits/stdc++.h>
using namespace std;


bool prime[1000000];

void primes()
{

	memset(prime,true,sizeof(prime));
	for(int i=2;i<=1000000;i++)
	{
		if(prime[i]==true)
		{
		for(int j=i*2;j<=1000000;j+=i)
		{
	         prime[j] =false;		
		}
	    }
	}
	//for(int i=2;i<100;i++)
	//if(prime[i]) cout<<i<<" " ;
}
int main()
{
	
	primes();
	int n;
	cin>>n;

	for(int i=1;i<=100;i++)
	{
		int val = n*i;
		val =val+1;
		if(prime[val]==false) 
		{
		cout<<i;
		break;
		}
		
	}
}
