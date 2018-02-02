#include<bits/stdc++.h>
using namespace std;
string s[   ];

long long unsigned main()
{
	long long unsigned n,k;
    cin>>n>>k;
     s[ ] ="Mayank";
     s[ ][ ] +=  %  ;
	for(long long unsigned i= ;i<= n; i++)
	{
	   s[i] ="Mayank";
	   s[i][ ]  += i/  ;
	   s[i][ ] += i%  ;
	}	
	
	for(long long unsigned i= ;i<=n-k+ ;i++)
	{
		string str;
		cin>>str;
	    if(str =="NO")
	    {
	    	 s[i+k- ] = s[i];
		}
		
	}
	for(long long unsigned i= ;i<=n;i++) cout<<s[i]<<" ";
	
	return  ;
	// bye bye;
}
