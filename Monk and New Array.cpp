#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) cin>>arr[i][j];
	   	sort(arr[i],arr[i]+m);
		
	}
	int ans =INT_MAX;
	for(int i=0;i<n-1;i++)
	{
	
		for(int j=0;j<m;j++) 
		{
			int ans1=INT_MAX,ans2=INT_MAX;
		    int a = lower_bound(arr[i+1],arr[i+1]+m,arr[i][j])- arr[i+1]; //cout<<a<<endl;
			if(a<m) ans1 = abs(arr[i+1][a]-arr[i][j]);
			if(a>0) ans2 = abs(arr[i+1][a-1]-arr[i][j]);
				ans = min(ans,min(ans1,ans2));
		}
	
	}
	cout<<ans<<endl;
	
}
