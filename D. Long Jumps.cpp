#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,len,x,y;
	cin>>n>>len>>x>>y;
	//int ans =-1;
	
	int arr[100005];
	
	bool first = false; 
	bool second  = false;
	
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(binary_search(arr,arr+n,arr[i]+x)) first = true;
		if(binary_search(arr,arr+n,arr[i]+y)) second = true;
	}
	
	if(first == true && second == true)
	return cout<<"0",0;
	
	if(first==true)
	{
		cout<<"1\n"<<y<<endl;
		return 0;
	}
	if(second ==true)
	{
		cout<<"1\n"<<x<<endl;
		return 0;
	}
	
	int ans = -1;
	
	for(int i=0;i<n;i++)
    {
    	if(arr[i]-x>=0)
    	{
    		if(binary_search(arr,arr+n,arr[i]-x-y) || binary_search(arr,arr+n,arr[i]-x+y))
    		{
    		ans = arr[i]- x;
			break;
		    }
		}
		if(arr[i]+x<=len)
		{
			if(binary_search(arr,arr+n,arr[i]+x-y) || binary_search(arr,arr+n,arr[i]+x+y))
			{
			ans = arr[i]+x;
			break;
		    }
		}
		if(arr[i]-y>=0)
		{
			if(binary_search(arr,arr+n,arr[i]-x-y) || binary_search(arr,arr+n,arr[i]+x-y))
			{
			ans = arr[i]-y;
			break;
		    }
		}
		if(arr[i]+y<=len)
		{
			if(binary_search(arr,arr+n,arr[i]-x+y) || binary_search(arr,arr+n,arr[i]+x+y))
			{
				ans = arr[i]+y;
				break;
			}
		}
	}
	if(ans!=-1)
	{
		cout<<"1\n"<<ans<<endl;
		return 0;
	}
	cout<<"2\n"<<x<<" "<<y<<endl;
	return 0;
}
