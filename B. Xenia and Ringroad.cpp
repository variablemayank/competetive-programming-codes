#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,m,var;
	cin>>n>>m;
	int arr[n+2];
	long sum =0;
	for(int i=1;i<=m;i++) cin>>arr[i];
	for(int i=1;i<=n;i++)
	{
		if(arr[i]<=arr[i+1])
		sum += (arr[i+1]-arr[i]);
		else sum+= (n-arr[i]+arr[i+1]);
	}
	cout<<sum;
}
