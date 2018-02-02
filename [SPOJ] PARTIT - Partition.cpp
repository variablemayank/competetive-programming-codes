#include<bits/stdc++.h>
using namespace std;

int dp[225][225][15];


int main()
{
   for(int i=1;i<221;i++)
   dp[i][i][1] = 1;
   
    for(int part =2;part<11;part++)
    {
   	    for(int sum =1; sum<221;sum++)
   	    {
   	    	for(int num =1;num<221;num++)
   	    	{
   	    		
	   	    	  if(sum-num >=0)
	   	    	  {
					 
		   	    	  for(int num_ = num ; num_<sum-num+1 ; num_++)
		   	    	  {
		   	    	     dp[num][sum][part] +=  dp[num_][sum-num][part-1];	
					  }
				  
			      }
		    }
		}
    }
    
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m,k;
    	cin>>m>>n>>k;
    	int rem_sum =m;
    	int till_now  =0;
    	int new_num =1;
    	
    	for(int part = 1; part<n+1; part++)
    	{
    		long long int comb =0;
    		for(int num  = new_num;num<220;num++)
    		{
    			comb+= dp[num][rem_sum][n-part+1];
    			if(comb>=k)
    			{
    		        cout<<num<<" ";
					new_num = num;
					comb -= dp[num][rem_sum][n-part+1];
					k -= comb;
					rem_sum  = rem_sum - num;
					break;	
				}
    			
			}
		}
		cout<<endl;
	}
	
    return 0;
}
