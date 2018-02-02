#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAX 10001
ll *v = new ll[MAX];
ll find(int test,int start,int end)
{
	int mid=(start+end)/2;
	if(v[mid]==test)
	{
		return mid;
	}
	else if(test<v[mid])
	{
		return find(test,start,mid-1);
	} 
	else 
	{
		return find(test,mid+1,end);
	}
}

int main()
{
	ll t; cin>>t;
	int value=t;

	for(int i=1;i<=t;i++) cin>>v[i];
	sort(v,v+value);
	int s;
	cin>>s;
	for(int i=0;i<s;i++)
	{
		int test;
		cin>>test;
		cout<<find(test,1,value)<<endl;
		
	}
	
}
