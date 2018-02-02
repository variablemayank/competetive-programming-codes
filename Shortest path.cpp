#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 int main()
 {   
    ll a,b= 1e18;
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		cin>>a>>b;
 		if(a==b)
 		{
 			cout<<"0"<<endl;
		}
		else
		{
			 ll counter =0,x,y;
			 x=1,y=1;
			 while(x!=a&&y!=b)
			 {
			    if(a>b)
			    {
			    	y=x+y;
				}
			 }
			 
		}
 		
	}
	return 0;
 }
