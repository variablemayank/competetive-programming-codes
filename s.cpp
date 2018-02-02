#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 main()
{
	ll n;
	cin>>n;
	vector<ll> arr(200005);
    for(int i=1;i<=n;i++)
    {
    	cin>>arr[i];
	}
	ll left =1,right = n;
	//vector<ll> brr(arr,arr+n);
	while(left<=right)
	{
		swap(arr[left],arr[right]);
		left+=2;
		right-=2;
	}
	for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
}
