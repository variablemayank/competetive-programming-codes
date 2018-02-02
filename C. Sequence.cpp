    #include<bits/stdc++.h>
    using namespace std;
	
	long long  ans[5005];
	long long arr[5005];
	long long  brr[5005];
	int main()
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			brr[i] = arr[i];
		}
		sort(brr+1,brr+1+n);
		
		long long unsigned  count =0;
		for(int i=1;i<=n;i++)
		{
		   for(int j=1;j<=n;j++)
		   {
		   	  ans[j] += abs(arr[i]-brr[j]);
		   	  if(j>1)
		   	  {
		   	    ans[j] = min(ans[j],ans[j-1]);	
			  }
		   }
		}
		cout<<ans[n];
		return 0; //bye bye 
	}
