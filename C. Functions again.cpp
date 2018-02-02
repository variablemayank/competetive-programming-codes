	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false),cin.tie(0);
	#define ll long long
	
	vector<ll> arr(100005);
	vector<ll> diff(100005);
	vector<ll> diff2(100005); 
	
	ll solve(vector<ll> vec)
	{
		int size = vec.size();
		ll max_so_far = INT_MIN, max_ending_here = 0;
		for(int i=0;i<size;i++)
		{
			max_ending_here = max_ending_here +vec[i];
		    
		    max_so_far = max(max_so_far,max_ending_here);
			
			if(max_ending_here<0)
			max_ending_here = 0;
		}
		return max_so_far;
	}
	int main()
	{
	        jadu;	
			int n;
			cin>>n;
			for(int i=1;i<=n;i++)
			{
				cin>>arr[i];
			}
		    for(int i=1;i<n;i++)
		    {
		    	diff[i] = abs(arr[i]-arr[i+1]);
		    	diff2[i]= diff[i];
		    	
		    	if(i&1)
		    	{
		    		diff[i] = -1LL *diff[i];
				}
				else 
				{
					diff2[i] = -1LL *diff2[i];
				}
			}
			ll ans = max(solve(diff),solve(diff2));
			cout<<ans<<endl;
	}
