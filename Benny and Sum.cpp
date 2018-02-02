#include<bits/stdc++.h>
using namespace std;

#define ll long long
int arr[100005];
int main()
{
	ll p,n;
	cin>>p>>n;
	for(int i=1;i<=p;i++)
	{
		cin>>arr[i];
	}
	while(n--)
	{
		long long left,right,mod,sum=0;
		cin>>left>>right>>mod;
		for(int i=left;i<=right;i++)
		{
			//ll temp = arr[i];
			//temp%= mod;
			sum +=arr[i];
		}
		cout<<sum%mod<<endl;
	}
}
