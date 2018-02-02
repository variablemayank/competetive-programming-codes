	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		int n,m;
		cin>>n>>m;
	    long long sum =0;
	    int arr[100005];
		for(int i=0;i<n;i++)
		{
		  cin>>arr[i];
		}
		int brr[100005];
		for(int i=0;i<m;i++)
		{
			cin>>brr[i];
		}
		for(int i=0;i<n-1;i++)
		{
		   sum+= arr[i]*arr[i+1];	
		}
		sum+= arr[n-1]*arr[0];
		cout<<sum<<endl;
		if(m==1)
		{
			sum+= arr[0]*arr[brr[0]-1];
		}
		else
		{
		   for(int i =0;i<n;i++)
		   {
		   	
		   }
		}
		cout<<sum<<endl;
	}
