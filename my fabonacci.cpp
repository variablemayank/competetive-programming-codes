#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int arr[100];
	arr[a]= 1;
	arr[2] =2;
	for(int i=3;i<=c;i++)
	{
		arr[i]= arr[i-2]+arr[i-1];
	}
	cout<<arr[c];
}
