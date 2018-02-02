#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int n,a,b,c,sq_rt,i,count=0;
	cin>>a;
	 cin>>b>>c;
	   sq_rt= (long long) sqrt(a)+1;
	   for(i=1;i<=sq_rt;i++)
	   {
	   	if(i%b==0||i%c==0)
	   	{
	   		count++;
		   }
	   }
	   cout<<a+b-count;
	   return 0;
}
