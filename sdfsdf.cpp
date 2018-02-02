#include<bits/stdc++.h>
using namespace std;

#define Pi 3.14159265358979

int main()
{
   int n;
   cin>>n;
   double r,v;
   cin>>r>>v;
	    for(int i=0;i<n;i++)
	    {
	   	   int s1,s2;
	   	   cin>>s1>>s2;
	   	   double dist  = s2-s1;
	   	   int cnt = dist/(2*Pi*r);
	   	   dist -= cnt*2 *Pi *r;
	   	   double l=0;
	   	   double r = 1e17;
		   	   for(int j = 0;j<147;j++)
		   	   {
		   	      double x= (l+r)/2;
				  double f = v *x +2 *r * sin (0.5*v/r*x);
				  if(f>dist) r= x;
				  else l = x;
				  	
			   }
			   printf("%.10f\n",l+cnt*2*Pi*r /v);
	    }
		return 0;	
}
