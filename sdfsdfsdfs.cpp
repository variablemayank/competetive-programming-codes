#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int arr[100001];
	cin>>t;
	while(t--)
	{
	   
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(arr[i]==0)
			{
				count++;
			}
			else
			{
				if(arr[i]!=0)
				{
					count += arr[i];
				int count1 = arr[i];
					int com =i;com++;
					for(com,count1;com<=n,&&count1!=0;com++,count1--)
					{
						if(arr[com]<arr[i])
						{
							arr[com]=0;
							
						}
						else
						{
							arr[com] = arr[i]-arr[com];
						}
					}
				}
			}
		}
		cout<<count<endl;
	}
}
