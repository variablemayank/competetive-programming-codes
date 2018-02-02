	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		ios_base::sync_with_stdio(false);
	    int n;
	    cin>>n;
	    vector<int> arr(10005);
	     int  sum =0;
	    for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
	    }
	    string s;
	    cin>>s;
	  
	    int ans =0;
	    for(int i=n-1;i>=0;i--)
	    {
	    	if(s[i]=='1') ans = max(ans,sum-arr[i]);
	    	else sum-= arr[i];
		}
		ans = max(ans,sum);
		cout<<ans<<endl;
	}
