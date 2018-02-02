	#include<bits/stdc++.h>
	using namespace std;
	
	vector<int> arr(101);
	
	
	int main()
	{
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++) 
		cin>>arr[i];
	    
	    long long sum = 0;
	    
	    for(int i=0;i<n;i++)
	    {
	      sum+=arr[i]/2 + arr[i]%2;
		}
	//	cout<<sum<<endl;
		if(sum>k)
		{
			cout<<-1;
			return 0;
	    }
	    vector<int> cup;
	    
		for(int i=0;i<n;i++)
		{
		   cup.push_back(arr[i]/2 +arr[i]%2);
		}
		 
		long long diff = k -sum;
		
		//sort(cup.begin(),cup.end());
	    for(int i=0;i<n&& diff>0;i++)
	    {
	        if(diff<=0) break;
	    	
			if(cup[i]+diff<=k)
	    	{
	    		long long var =  k- cup[i];
	    	    cup[i]+=diff;
	    	    break;
	        }
	    	else
	    	{
	    		long long var = k - cup[i];
	    		cup[i] += var;
	    	    diff -= var;
			}
			
		
		}
	    for(int i=0;i<n;i++)
		{
			if(cup[i]>k)
			{
				return cout<<"-1",0;
			}
		}
        sum=0;
	    for(int i=0;i<n;i++) sum+= cup[i];
	    if(sum!=k)
	    return cout<<"-1",0;
	    
		for(int i=0;i<cup.size();i++)
		cout<<cup[i]<<" ";
		return 0;
	}
