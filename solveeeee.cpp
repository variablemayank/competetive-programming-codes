#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int brr[n][m];
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
	    {
	    	cin>>arr[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
	    {
	    	cin>>brr[i][j];
		}
	}
	int crr[n][m]={{0}};
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int k =1 ; k<=m ; k++)
			{
					crr[i][j] += arr[i][j]* brr[k][j];
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
