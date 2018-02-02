#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	int count =0;
	for(int i=2;i<t;i++)
	{
		for(int j=i+1;j<=t;j++)
		{
			if(__gcd(i,j)==1&&(i*j)<=t)
			{
				count++;
				//cout<<i<<" "<<j<<endl;
			}
					}
	}
	cout<<count<<endl;
}
