	#include<bits/stdc++.h>
	using namespace std;
	
	long long arr[200005];
	long long freq[200005];
	 main()
	{
		long long n;
		cin>>n;
	    map<int,int> mp;
		for(long long i =0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		for(long long i=0;i<n-1;i++)
		{
			long long diff = abs(arr[i]-arr[i+1]);
		     mp[diff]++;
		}
		sort(mp.begin(),mp.end());
	
		int mini =INT_MAX;
		int index =0;
        for(map<int,int> ::iterator it = mp.end();it!=mp.end();it++)
        {
        	if(it->first<mini)
        	{
        		mini =it->first;
        		index = it->second;
			}
		}
		cout<<mini<<" "<<index<<endl;
	}
