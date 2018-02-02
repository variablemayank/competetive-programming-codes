#include<bits/stdc++.h>
using namespace std;
int main()
{
    
	int t;
	int A[50001];
	cin>>t;
	while(t--)
	{
	  int n,m,d,count=0;
	  cin>>n>>m>>d;
	  for(int i=0;i<n*2;i++)
	  {
	  	cin>>A[i];
	  	
	  }
	  for(int i=0;i<m*2;i=i+2)
	  {
	  	    unsigned int x,y;
	  	   cin>>x>>y;
	  	        if(x+y+A[i]+A[i+1]<=d)
				{
	  	            count++;
	  	            //cout<<count;
			    }
			}
	if(d%2!=0)
	{
		if(count>m/2) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	else cout<<"NO\n";
   }
	return 0;
};
