	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			int n,q;
			scanf("%d%d",&n,&q);
	        vector<int> arr(n+1);
	        for(int i=1;i<=n;i++) cin>>arr[i];
	        
	        while(q--)
	        {
	        	 int l,r,k;
	        	 scanf("%d%d%d",&l,&r,&k);
	        	   int count =0;
	               int result =0;
	               int var = arr[1];
	               for(int i=1;i<=n;i++)
	               {
	        	     if(var ==arr[i])
	        	     count++;
	        	     else
	        	     {
	        	     	if(count>=k) 
	        	     	{
	        	     	 result++;
						}
						 count=1;
						 var = arr[i];	
					 }
		           }
		           cout<<result<<endl;
		    }
	    }
	}
