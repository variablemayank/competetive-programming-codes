#include<iostream>
using namespace std;
int seive()
{
	bool prime[1000] ={true};
	
	for(int i=2;i*i<=1000;i++)
	{
		if(prime[i]==true)
		{
			for(int j=i*2;j<=1000;j+=i)
			{
				prime[j]= false;
			}
		}
	}

for(int i=2;i<=1000;i++)
{
	if(prime[i]==true)
	{
		cout<<i<<" ";
	}
}
}
int main()
{
	seive();
}
