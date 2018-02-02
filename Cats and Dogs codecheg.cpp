#include<bits/stdc++.h>
using namespace std;

const int mod =1e9+7;
#define ll long long 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  int cats,dogs,legs;
	  cin>>cats>>dogs>>legs;
	  if(dogs==0 )
	  {
	  	if(legs==((1ll)*cats*4) )
		  {
		  cout<<"yes\n";
	      }
	  	else cout<<"no\n";
	  }
	  else if (cats/2<=dogs)
	  {
	  	  if(cats ==1 &&dogs ==1&& (legs==4||legs==8))
	  	  {
	  	      cout<<"yes\n";	
		  }
		  else if(cats ==1 && dogs == 0 &&legs==4)
		  {
		  	cout<<"yes\n";
		  }
		  else if(cats ==0 && dogs ==1 &&(legs==0||legs ==4))
		  {
		  	cout<<"yes\n";
		  }
		  else 
		  {
		  	long long legv = (((1ll)*4*cats)%mod + ((1ll)*4*dogs)%mod)%mod;
		  	 legv %= mod;
		  	 long long cdogs = (((1ll)*4*dogs)%mod+ ((1ll)*(cats/(2*dogs))*4)%mod)%mod;
		  	 
		  	if(legs<=legv &&legs%4==0&&legs!=0 &&legs>=cdogs)
		  	{
		  	 cout<<"yes\n";	
			}
			else cout<<"no\n";
		  }
	  }
	  else
	  {
	  	 long long legv = (((1ll)*4*cats)%mod + ((1ll)*4*dogs)%mod)%mod;
		 legv %= mod;
		 long long cdogs = (((1ll)*4*dogs)%mod+ ((1ll)*(cats/(2*dogs))*4)%mod)%mod;
		 if(legs>=cdogs && legs%4==0 && legs!=0&&legs<=legv)
		 {
		 	cout<<"yes\n";
		 }
		 else cout<<"no\n";
	  }
	}

   return 0;
}
