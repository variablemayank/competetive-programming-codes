#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int arr[a+1];
	int count =0;
	for(int i=1;i<=a;i++)
	{
	
	cin>>arr[i];
	if(arr[i]==1)
	count++;
    }
    
    if(count  <b)
    {
    	return cout<<"-1",0;
	}
	int var = c;
	int prev =1;
	int ans =0;
	bool flag = false;
	
	int suffix[a+1];
	
	suffix[b] = arr[b];
	for(int i=a-1;i>=1;i--)
	{
		suffix[i]   = suffix[i+1] +arr[i];
	}
	
	for(int i=1;i<=a;i++)
	{
		cout<<suffix[i]<<" ";
	}
	int index  =0;
    for(int i=1;i<=a;i++)
    {
    	if(suffix[i]==b )
    	{
    	index = i;
    	break;
        }
	}
 	cout<<index<<endl;
	for(int i=1;i<=a;i++)
	{
	    if( b >0 && arr[i] ==1 && i>=index)
	    {
	    	 
	          if(flag ==false)
	          {
			      ans += (i- prev);
	              prev = i-1;
	              b--;
	              flag = true;
			  }
			  if(flag == true)
			  {
			  	  ans += (i-prev)*((var-b)*c);
			  	  prev  =i-1;
			  	  b--;
			  }
	          
		}
		
		
	}
	cout<<ans<<endl;
}
