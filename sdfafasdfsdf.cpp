#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
       int t;
       stack<int> s;
       int maxi =0;
       cin>>t;
       while(t--)
       {
       	   int var;
       	   cin>>var;
       	   if(var == 1)
       	   {
       	        int n;
				cin>>n;
				s.push(n);
				if(n>maxi)
				{
					maxi = n;
				}
		   }
		   else if(var==2)
		   {
		   	    if(!s.empty())
		   	    {
		   	    	s.pop();
				}
		   }
		   else
		   {
		   	  cout<<maxi;
		   }
	   }
}
