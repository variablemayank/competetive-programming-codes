#include<iostream>
#include<math.h>
#define ll long long 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d,k,r;
		cin>>a>>b>>c>>d>>k;
	    r= (int)floor(cbrt(k/a))+1;
	    while(r--)
	    {
	        if(d+(r)*(c*(r)+ <k )||r==0)
	        {
			cout<<r<<endl;
	        break;
	        }
		}
	
	}
	return 0;
}
