#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,sum=0;
	cin>>t;
	int arr[t],var;
	for(int i=0;i<t;i++) cin>>arr[i];
	sort(arr,arr+t);
	for(int i=0;i<t;i++) sum+= arr[i];
	cout<<sum;
	var = arr[t-1] - ((sum) - arr[t-1]) +1;
	cout<<var;
}
