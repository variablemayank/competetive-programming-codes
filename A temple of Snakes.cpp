#include<bits/stdc++.h>
using namespace std;

#define jadu ios_base::sync_with_stdio(false)
int arr[100005];
int main()
{
	jadu;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;++i) cin>>arr[i];
	    if(n&1)
		{
			long long unsigned sum =0;
			int var = n/2+ n%2;
			//cout<<var<<endl;
			int  index =1;
	    	for(int i=1;i<=var&&index<=n;++i)
	    	{
	    	 
			   sum+= abs(arr[index]-i);
			   index++;
	        }
			for(int j=var-1;j>=1 && index<=n;j--)
			{
				sum+= abs(arr[index]-j);
				index++;
		    }
		    cout<<sum<<endl;
			
		}
		else
		{
			long long  unsigned sum =0;
			int var = n/2;
			sum+=abs(arr[1]);
			int index =2;
			for(int i=2;i<=var+1 && index<=n;i++)
			{
				sum+= abs(arr[index]-(i-1));
				index++;
			}
			for(int j=var-1;j>=1 && index<=n;j--)
			{
				sum+= abs(arr[index]-j);
				index++;
			}
			
			long long  unsigned sum1=0;
			sum1+= arr[n];
			index =n-1;
			for(int i=2;i<=var+1&& index>0;i++)
			{
				sum1+= abs(arr[index]-(i-1));
				index--;
			}
			for(int j=var-1;j>=1&&index>0;j--)
			{
				sum1+= abs(arr[index]-j);
				index--;
			}
		//	cout<<sum<<" "<<sum1<<endl;
		    cout<<min(sum,sum1)<<endl;	
		}
	}
}
