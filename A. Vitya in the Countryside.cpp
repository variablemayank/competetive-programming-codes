#include<bits/stdc++.h>
using namespace std;

long long main()
{
	long long n;
	cin>>n;
	long long arr[n];
	for(long long i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	if(n==1) cout<<"-1";
	if(arr[n-1]<15) cout<<"UP";
	else cout<<"DOWN";
}
