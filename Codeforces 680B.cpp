#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,arr[1000],count=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=1;i<=n;i++)
	{
		if(arr[i])
		{
			int distance = i-k;
			int j= k-distance;
	        cout<<distance<<" "<<i<<j<<" ";
			if(j<1 || j>n ||arr[i]==arr[j] ) count++;
			
		}
	}
	cout<<count<<endl;
}
