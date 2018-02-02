	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		int n,m,k;
		cin>>n>>m>>k;
	    int arr[n+1];
	    for(int i=1;i<=n;i++) cin>>arr[i];
	    int ans =10000;;
	    for(int i=1;i<=n;i++)
	    {
	    	if(arr[i]>0 && arr[i]<=k)
	    	ans = min(abs(i-m)*10,ans);
		}
	    cout<<ans<<endl;
	}
