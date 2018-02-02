#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[1003];
	int brr[1003];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		
	}
	for(int i=1;i<=n;i++)
	{
		cin>>brr[i];
	}
	int cnt =0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]!=brr[i])
		{
			cnt++;
		}
	}
	
	if(cnt==1)
    {
      for(int i=1;i<=n;i++)
      {
      	if(arr[i]!=brr[i])
      	{
      		soln[i] = 1001;
		}
		else 
		soln[i] = brr[i];
	  }
	}
	int count =1;
	int soln[1004];
	for(int i=1;i<=n;i++)
    {
    	if(arr[i]!=brr[i])
    	{
    		if(count==1)
    		{
    			soln[i] = max(arr[i],brr[i]);
    			count++;
			}
		    else if(count==2)
			{
				soln[i]=  min(arr[i],brr[i]);
				
			}
			
		}
		if(arr[i]==brr[i]){
			soln[i]= brr[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<soln[i]<<" ";
	}
}
