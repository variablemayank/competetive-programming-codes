#include<bits/stdc++.h>
using namespace std;
 
int fun(int *arr,int n)
{
	int count=1,c=1;
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]<arr[i+1])
		{
			count++;
			c=max(c,count);
		}
		else
			count=1;
	}
	return c;
}
 
 
int main()
{
	int arr[]={-1,-2,-3,-1};
//	int arr[] = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
//	int	arr[] = {1,2,3,3,2,4,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=fun(arr,n);
	cout<<k<<endl;
	return 0;
}
