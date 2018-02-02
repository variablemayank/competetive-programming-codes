#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int brr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int j=0;j<n;j++) cin>>brr[j];
	
	int count =0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=brr[i]) count++;
	}
	count/=2;
	if(count<1) cout<<"-1";
	else cout<<count;
	return 0;
}
