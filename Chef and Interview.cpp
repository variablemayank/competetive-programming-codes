#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,sum =0;
		cin>>n;
		
		for(int i=1;i*i<=n;i++)
		{
			if(n%i==0)
			{
				 sum += i;
				 
				 if(i != n/i)
				 {
				 	sum+= n/i;
				 }
				 
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
