#include<iostream>
using namespace std;
void fastscan(int );
int main()
{
	int 
	x;
  bool neg=true;
	register int c;
	x=0;
	c=getchar();
	if(c=='-')
	{
		neg=true;
		c=getchar();
	}
	for(;(c>47 && c<58);c=getchar())
	{
		x= (x<<1) + (x<<3) +c -48;
		if(neg)
		x*=-1;
		
	}
	cout<<x;
	
}
