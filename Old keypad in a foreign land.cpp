#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	int arr[1001];int arr1[1001];
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i]; sort(arr,arr+n);
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++) {cin>>arr1[i]; sum += arr1[i];}
	
	sort(arr1,arr1+t);
		if(sum<n) {cout<<"-1";return 0;}
	
	int ans =0,index=1;
	
	for(int i=n-1;i>=0;)
	{
		for(int j=0;j<t&&i>=0;j++)
		{
			if(arr1[j]>0)
			{
				arr1[j]--;
				ans += index * arr[i];
				i--;
			}
			
		}
		index++;
		
	}
	cout<<ans<<endl;
}
