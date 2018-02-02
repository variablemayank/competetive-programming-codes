#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	long long a[100000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			cout<<a[i];
		}
	
	}
	
}
