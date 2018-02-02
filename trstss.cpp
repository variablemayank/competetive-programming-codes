#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long  arr[1<<n][1<<n];
	for(int i=0;i<(1<<n)-1;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cin>>arr[i][j];
		}
	}
	int b[1<<n];
	for(int i=1;i<=1<<n;i++) b[i-1]=i;
	int k = (1<<n);
	for(int i=1;i<=1<<n;i++)
	{
		int y =0;
		for(int j=2;j<=k;j+=2)
		{
			if(arr[b[j-1]-2][b[j-2]-1]==1)
			{
				b[y]= b[j-1];
			}
			else b[y] = b[j-2];
			y++;
		}
		k=y;
	}
	cout<<b[0];
	
}
