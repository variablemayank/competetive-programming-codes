#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	char s[2][100005];
    	int n;
    	cin>>n;
    	
    	for(int i=0;i<2;i++)
    	{
    	    cin>>s[i];
		}
		
		bool flag = false;
		int count =0;
		for(int i=0;i<n-1;i++)
		{
		    if(flag ==false)
		    {
		   	  if(s[0][i]== '*' && s[1][i]== '*')
		   	  {
		   	 	
		   	   count++;
		   	   flag = true;
		   	   
		      }
		      
            }
            if((s[0][i] =='*' && s[0][i+1]== '*')||(s[1][i]== '*'  && s[1][i+1]== '*'))
            {
                count++;
			}
			if((s[0][i] == '*' && s[1][i+1]=='*') || (s[1][i] == '*'  &&  s[0][i+1] == '*'))
			{ 
			    if(flag == false)
			    {
				count++;
				flag = true;
			    }
			}
		}
		if(flag == false)
		{
			if(s[0][n-1]== '*' && s[1][n-1]== '*')
		   	  {
		   	 	
		   	   count++;
		   	   
		   	   
		      }
		}
		
		
		cout<<count<<endl;
	}
}
