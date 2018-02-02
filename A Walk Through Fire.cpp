#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[10001];
	while(t--)
	{
		 
		int n;
		cin>>n;
		
		for(int i=1;i<=n;i++) cin>>arr[i];
		int count=0;
		for(int i=1;i<=n;i++)
		{
			if(arr[i]==0) count++;
			else
			{
				 int com = arr[i];
				 int com1 =com;
				 int iv = i;
				 iv++;
				 	for(iv;iv<=n,com1!=0;iv++,com1--)
				 	{
				 		if(arr[iv]<com)
				 		{
				 			arr[iv]=0;
						}
						else
						{
							arr[iv]= com-arr[iv];
						}
					}
			}
		}
		cout<<count<<endl;
	}
}
	

