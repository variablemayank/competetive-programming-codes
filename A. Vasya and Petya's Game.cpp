#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<bool> primes(1000,true);
	primes[1] =false;
	for(int i=2;i*i<=1000;i++)
	{
		if(primes[i]==true)
		{
			for(int j=i*2;j<=1000;j+=i)
			{
				primes[j] =false;
			}
		}
	}
	
	//for(int i=2;i<=10;i++) if(primes[i]==true ) cout<<i<<" ";
	//cout<<endl;
	int n;
	cin>>n;
	vector<int> sol;
	for(int i=1;i<=n;i++)
	{
		if(primes[i] == true)
		{
			int q= 1;
			while(q<=n/i)
			{
				q = q*i;
				sol.push_back(q);
			}
		}
	}
	cout<<sol.size()<<endl;
	for(int i=0;i<sol.size();i++) cout<<sol[i]<<" ";
	
	return 0;
}
