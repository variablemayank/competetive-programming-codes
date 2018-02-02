#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string ans = "1";
	int zeroes =0;
	for(int i = 0; i<n ;i++ )
	{
	   string s;
	   cin>>s;
	   if(s[0]== '0') return cout<<"0",0;
	   
	   if(s[0]=='1')
	   {
	   	  // count the no of zeroes
	   	         bool check = true;
		   	     for(int l=1;l<s.size();l++)
		   	     {
		   	   	    if(s[l]!= '0') check =0;
		   	     }
		   	     
		   	    if(check) zeroes+= (s.size()-1);
		   	    else ans =s;
	   }
	   else ans = s;
	   
      
	}
	  for(int j=0;j<zeroes;j++)
        {
       	   ans+= '0';
	    }
	    
	    cout<<ans<<endl;
	
} 
