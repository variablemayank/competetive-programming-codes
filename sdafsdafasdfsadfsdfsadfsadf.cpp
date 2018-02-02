#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long  a,b,c;
	cin>>a>>b>>c;
	long long  a1  =a;
	long long  b1 = b;
	long long  c1 = c;
	long long  arr[a+1];
	long long  count =0;
	for(long long  i=1;i<=a;i++)
	{
	
	cin>>arr[i];
	if(arr[i]==1)
	count++;
    }
    
    if(count  <b)
    {
    	return cout<<"-1",0;
	}
	long long  var = b;
	long long  prev =1;
	long long  ans =0;
	bool flag = false;
	
	long long suffix[a+1];
	memset(suffix,0,sizeof(suffix));
	
	suffix[b] = arr[b];
	for(long long  i=a-1;i>=1;i--)
	{
		suffix[i]   = suffix[i+1] +arr[i];
	}
    ////for(long long  i=1;i<=a;i++)
    //cout<<suffix[i]<<" ";
    
	if(count ==1)
	{
		
		for(long long  i=1;i<=a;i++)
		{
		     if(arr[i]==1)
			 {
			   cout<<i-1;
			   return 0;	
		     }	
		}
	}
	long long  index  =0;
    for(long long  i=1;i<=a;i++)
    {
    	if(suffix[i]==b )
    	{
    	index = i;
        }
	}
  	//cout<<"index"<<index<<endl;
	for(long long  i=1;i<=a;i++)
	{
	    if( b >0 && arr[i] ==1 && i>=index)
	    {
	    	 
	          if(flag ==false)
	          {
			      ans += (i- prev);
			      prev = i;
	              b--;
	              flag = true;
	        /////    cout<<"ans1 "<<ans<<endl;
			  }
			  if(flag == true)
			  {
			      
			  	  ans += (i-prev)*((var-b)*c);
			  	  prev  =i;
			  	  b--;
			  	  
			  }
	          
		}
		
		
	}
	//cout<<ans<<endl;
	long long  ans1= 0;
	bool flag1 = false;
	long long  prev1 =1;
	for(long long  i=1;i<=a1;i++)
	{
	    if( b1>0 && arr[i] ==1)
	    {
	    	 
	          if(flag1 ==false)
	          {
			      ans1 += (i- prev1);
			      prev1 = i;
	              b1--;
	              flag1 = true;
	        /////    cout<<"ans1 "<<ans<<endl;
			  }
			  if(flag1== true)
			  {
			      
			  	  ans1 += (i-prev1)*((var-b1)*c1);
			  	  prev1  =i;
			  	  b1--;
			  	  
			  }
	          
		}
		
		
	}
	cout<<min(ans,ans1)<<endl;
}
