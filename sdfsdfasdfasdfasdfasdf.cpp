#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int var  = n;
	n = 2*n*k;
	int arr[n+1];
	for(int i=0;i<n;i++) cin>>arr[i];
	//cout<<n;
	sort(arr,arr+n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		int mini = INT_MAX;
	for(int i=0;i<2*var;i+=2)
	{
		cout<<arr[i+1]<<" "<<arr[i]<<endl;
		mini = min(mini,arr[i+1]-arr[i]);
	}
	cout<<mini<<endl;
}
