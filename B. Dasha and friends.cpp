#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,l;
	cin>>n>>l;
	int arr[n];
	int brr[n];
	set<int>A;
	set<int>B;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int j=0;j<n;j++)
	{
		cin>>brr[j];
		A.insert(brr[j]);
	}
	for(int  i=0;i<l;i++)
	{
		for(int j=0;j<n;j++) B.insert((i+arr[j])%l);
		if(A==B) return cout<<"YES\n",0;
		B.clear();
	}
	cout<<"NO\n";
	
	 
}
