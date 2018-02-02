#include<iostream>
using namespace std;
int main()
{
	int t;
	long long n[1000],m[1000];
	cin>>t;
	while(t--)
	{
		long long count=0;
		cin>>n[0]>>m[0];
         long long var[1000];
		  var[0]=m[0];
		while(var[0]--)
		{
		  long long x[1000],y[1000];
		  cin>>x[0]>>y[0];
		  long long var1[1000];
		  var1[0]=y[0];
		  while(var1[0]--)
		  {
		    if(x[0]<=y[0]) count++;
		    else
		    {
		    	if(x[0]<=n[0]-1) count++;
			}
		  }
	}
		  
		  
		
	    
	    if(count==m[0]) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
