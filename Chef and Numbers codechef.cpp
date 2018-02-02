#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define first fir
#define second sec
#define fast ios_base::sync_with_stdio(false)

int arr[100000];

int main()
{
	fast;
	int t; cin>>t;
	for(int i=0;i<t;i++) cin>>arr[i];
	
	int count =0;
	for(int i=0;i<t-1;i=i+2)
	{
		if(arr[i]<arr[i+1]) continue;
		if(arr[i]>arr[i+1]) count+=2;
	}
	//if(count ==0) count =1;
	
	cout<<count<<endl;
}
