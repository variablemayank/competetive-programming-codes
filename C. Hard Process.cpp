	#include"bits/stdc++.h"
	using namespace std;
	
	int arr[300005];
	int main()
	{
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>arr[i];
	    int maxilength =0;
	    int left =0;
	    int right =0;
	    int count =0;
	    int l=1;
	    for(int i=1;i<=n;i++)
	    {
	    	if(arr[i]==0) count++;
	    	while(count>k)
	    	{
	    		if(arr[l]==0)
	    		count--;
	    		l++;
			}
			if(i-l +1 >maxilength)
			{
				maxilength = i-l+1;
				left = l;
				right = i;
			}
		}
		cout<<maxilength<<endl;
		for(int i=left;i<=right;i++)
		{
			if(arr[i]==0) 
			arr[i] =1;
		}
		for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
	}
