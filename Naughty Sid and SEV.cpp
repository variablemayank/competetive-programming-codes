#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14159265 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,h,th,y;
		cin>>a>>h>>th;
		float x=tan(th*PI/180);
		if(x<h*1.0/a)
		{
			y=ceil(h-a*x/2);
			
		}
		else
		{
			y=ceil(h*h/(2*a*x));
		}
		cout<<y;
		
	}
	return 0;
}
