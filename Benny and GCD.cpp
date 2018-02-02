#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	ll left,r,g;
	cin>>left>>r>>g;
	ll count=0;
	for(int i=left;i<=r;i++)
	{
		for(int j=i;j<=r;j+=i)
		{
			if(__gcd(i,j)==g) 
			{
			count++;
			if(i!=j) count++;
		    }
			cout<<i<<" "<<j<<endl;	
		}
	}
	cout<<count<<endl;
}
