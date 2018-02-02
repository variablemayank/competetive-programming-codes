#include<bits/stdc++.h>
using namespace std;
int  main()
{
	ios_base::sync_with_stdio(false);
	int n,k,square,sum =0;
	cin>>n>>k;
	square = n*n;
	int arr[n][n];
	memset(arr,0,sizeof(arr));
	for(int i= n-1;i>=0;i--)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(j<k-1) break;
			arr[i][j] = square;
			square-- ;
			if(j==k-1)
			{
				sum+= arr[i][j];
			}
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int  j=k-2;j>=0;j--)
		{
			arr[i][j] = square;
			square--;
		}
	}
	cout<<sum<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	// bye bye
}
