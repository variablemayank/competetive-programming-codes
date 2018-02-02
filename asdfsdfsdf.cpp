#include<bits/stdc++.h>
using namespace std;



int main()
{
	
    	int n;
    	cin>>n;
        vector<int> arr(200005);
        vector<int> brr(200005);
        
        
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>brr[i];
		}
		
	//	vector<int> crr =arr;
		
		for(int i=0;i<n;i++)
		{
			int idx = upper_bound(arr.begin(),arr.begin()+n,arr[i])-arr.begin();
			cout<<idx<<endl;
			if(arr[i]==arr[idx])
			{
				brr[i] = max(brr[i],brr[idx]);
				brr[idx] = brr[i];
			}
		}
	/*	for(int i=0;i<n;i++)
		{
		  for(int j=i+1;j<n;j++)
		  {
		      if(arr[i]==arr[j])
		      {
		          brr[i] = max(brr[i],brr[j]);
		          brr[j] = brr[i];
		      }
		  }
		}
		*/
		for(int i=0;i<n;i++) cout<<brr[i]<<" ";
		cout<<endl;
	
}
