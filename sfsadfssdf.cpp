#include<bits/stdc++.h>
using namespace std;

#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
 main()
{
	
	long long n,k;
	scanf("%d%d",&n,&k);
	long long arr[200005];
	for(int i=0;i<n;i++)
	{
    scanf("%lld",&arr[i]);
		
	}
	
/*	if(n&1)
	{
		long long count =0;
		double ans =0.0;
		double sum =0.0;
		long long div = n-k+1;
	    for(long long i=0;i<n;i++)
	    {
	    	 sum += arr[i];
	    	 count++;
	     	 if(k== count)
		     {
		  // //    trace3(val,count,i);
		   //    cout<<i<<endl;
		       
		   //   trace2(sum,i);
		     //	cout<<sum<<endl;
		     	ans += (sum/div);
		     	//cout<<ans<<endl;
		     	sum = arr[i];
		     	//cout<<arr[i-1]<<endl;
		     	count =1;
		     //	cout<<i<<endl;
			 }
			 
		
		//	 cout<<count<<endl;
		}
//		if(count==val)
//		{
//			ans+= sum/k;
//		}
	    prlong longf("%.10f",ans);
		return 0;
	}
	*/
	double ans =0.0;
	double sum =0.0;

 	long long div =n-k+1;
	long long count =0;
	long long val = (n/k);
	for(long long i=0;i<n;i++)
	{
		 sum+= arr[i];
	    count++;
	     if(count==k)
	     {
	     	 ans+= sum/div;
	     	 //trace4(sum,ans,i,div);
	     	 sum =arr[i];
	     	 count=1;
		 }
		  
		
	}
	printf("%.15f",ans);
	return 0;
	
}
