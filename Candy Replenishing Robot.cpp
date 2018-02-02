#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	int arr[t+1];
	for(int i=1;i<=t;i++) cin>>arr[i];
	int count =0;
	int m = n;
	for(int i=1;i<=t;i++)
	{
		m  = m-arr[i];
		if( i<5 &&m<5 &&i<t)
		{
		   int counti= n -m;
		   count += counti;
		   m+= counti;
		 //  cout<<m<<endl;
		}
	}
	cout<<count<<endl;
}
