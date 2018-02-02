#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[t+1];
	for(int i=1;i<=t;i++)
	{
		cin>>arr[i];
	}
	if(t==2)
	{
	  cout<<abs(arr[1]-arr[2]);
	}
	else
	{
		cout<<abs(arr[1]-arr[t/2+1]);
	}
	
}
