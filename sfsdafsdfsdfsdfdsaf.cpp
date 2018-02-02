#include<bits/stdc++.h>
using namespace std;


int cum[2000006];

int main()
{
	string x,y;
	cin>>x>>y;
	x = " "+ x;
	y = " "+ y;
	
	int a = x.size()-1;
	int b = y.size()-1;
	int l,r;	
	cum[0] =0;
    for(int i=1;i<=b;i++)
    {
    	cum[i] = cum[i-1]+ (y[i]-'0');
	}
	long long int  ans =0;
	for(int i=1;i<=a;i++)
	{
		 l = i;
		 r = b- a +i;
	    int sum  = cum[r] - cum[l-1];
	    if(x[i]=='0')
	    {
	    	ans+= sum; 
		}
		else
		{
			ans += r-l +1 -sum;
		}
	}
	cout<<ans;
}
