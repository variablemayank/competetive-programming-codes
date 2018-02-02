#include <iostream>
using namespace std;

int main()
{
    
  int t; cin>>t;
  
  while(t--)
  {
      
      
      
      int n,m;
      
      cin>>n >>m;
      if(n==m)
      {
           int val = (n-1)*50;
          // cout<<val<<endl;	
	  }
      else
      {
      	long long val = (m-1);
      //	cout<<val<<endl;
      	long long diff = n-m;
      	if(diff==1)
      	{
		
      	val += diff;
      	val = val*50;
        }
      	else
		{
		    val += (diff-1);
		    val = val*50;
		}
      	
		  cout<<val<<endl;
      	
	  }
  }
}

