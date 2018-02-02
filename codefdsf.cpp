#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	if(t==1)
	{
		int n;
		cin>>n;
		if(n==0) cout<<"NO\n";
        if(n==1) 
		{
		cout<<"YES\n";
		cout<<"1\n";
		cout<<"1 1\n";
	    }
	}
	else
	{
        int arr[t];
        int count =0;
	for(int i=0;i<t;i++)
	{
		
		cin>>arr[i];
		if(arr[i]!=0) count++;
	}
	cout<<"YES\n";
	cout<<count<<endl;
	for(int i=t-1;i>=0;i--)
	{
		if(arr[i]!=0)
		{
		
		cout<<i+1<<" "<<i+1<<endl;
	    }
	}
    }
}
