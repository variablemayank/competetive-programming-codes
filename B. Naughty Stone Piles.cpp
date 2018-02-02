	#include<bits/stdc++.h>
	using namespace std;
	
	long long n;
	long long arr[100005];
	long long sum[100005];
	
	long long getsum(long long l,long long r)
	{
		 r = min(r,(n-1));
		return (sum[r]-sum[l-1]);
	}
	
	
	int main()
	{
	//	long long n;
		cin>>n;
		for(long long i=0;i<n;i++) cin>>arr[i];
	    
		sort(arr,arr+n);
		reverse(arr,arr+n);
		
		sum[0] =arr[0];
		for(long long i=1;i<n;i++)
		{
			sum[i] = sum[i-1]+arr[i];
		}
		
		long long q;
		cin>>q;
	
		long long res =0;
		for(long long i=1;i<n;i++)
        {
         	res += arr[i]*i;
		}
		for(long long i=0;i<q;i++)
		{
             long long k;
             cin>>k;
            if(k==1)
            {
         	 cout<<res<<" ";
         	 continue;
		    }
		 
         long long child =1;
         long long res =0;
        
         for(long long j=1,t=1;j<n;j+=child,t++)
         {
		    child *=k;
		    res += getsum(j,j+child-1)*t;
		 }
		 cout<<res<<" ";
	   }
	   cout<<endl;
	 
	  
    return 0;	 
   }
