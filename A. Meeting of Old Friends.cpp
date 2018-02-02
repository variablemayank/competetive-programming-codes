#include<bits/stdc++.h>
using namespace std;

int main()
{
	 long long int   l1,r1,l2,r2,k;
	cin>>l1>>r1>>l2>>r2>>k;
    long long int  l = max(l1,l2);
    long long int  r = min(r1,r2);
    if(l>r)
    return cout<<"0",0;
    else 
    {
    	if(k>=l  && k<=r)
    	{
    		cout<<(abs(r-l));
		}
		else
		{
			cout<<abs(r-l)+1;
		}
	}
	return 0;
}
