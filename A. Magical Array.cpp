	#include<bits/stdc++.h>
	using namespace std;
	
	
	int arr[100005];
	
	int main()
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++ ) cin>>arr[i];
		
		int val  =arr[1];
		int count =0;
		long long unsigned int sum =0;
		for(int i=1;i<=n;i++)
		{
			if(val==arr[i])
			{
		       sum+= count++;
			}
			else
			{
				count=1;
			    val = arr[i];
			}
		
		}
		cout<<sum+n;
	}
