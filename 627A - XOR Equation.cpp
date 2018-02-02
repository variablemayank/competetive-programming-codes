#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long sum,x;
	cin>>sum>>x;
	long long b = (sum-x)/2;
	if(b<0 || x+2 *b != sum ||(x&b)!=0) return cout<<"0",0; 
	//Now counting the bits
	long long bits=0;
	long long temp = x;
	while(temp>0)
	{
		bits += temp &1;  // if tmp%2==1 
		temp>>=1; // tmp/=2
	}
	long long ans = 1LL<<bits;
	if(b==0) ans -= 2;
    return cout<<ans,0;
}
