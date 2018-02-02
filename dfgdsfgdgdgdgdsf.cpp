#include<bits/stdc++.h>
using namespace std;

int main()
{
	int  n,m;
	cin>>n>>m;
	if(n==1)
	{
		int x;
		cin>>x;
		if(x>=m)
		{
			cout<<"0 0\n";
			return 0;
		}
		if(x<m)
		{
			cout<<"1"<<" "<<x;
			return 0;
		}
	}
	else
	{
	
	int arr[100005];
	long long total =0;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		arr[i] = x+ i*n;
		total += arr[i];
	}
	
	 sort(arr+1,arr+n+1);	
    if(total<=m)
    {
    long long sum =0;
	int count =0;
	for(int i=1;i<=n;i++)
	{
	   if(sum+arr[i]<=m)
	   {
	   	sum +=arr[i];
	   	count++;
	   }
	}
	cout<<count<<" "<<sum<<endl;       
	}
	else
	{
		for(int i=1;i<=n;i++)
		arr[i] -=i;
    long long sum =0;
	int count =0;
	for(int i=1;i<=n;i++)
	{
	   if(sum+arr[i]<=m)
	   {
	   	sum +=arr[i];
	   	count++;
	   }
	}
	cout<<count<<" "<<sum<<endl;    
		
	}
   }

   return 0;
	 
}
