#include<bits/stdc++.h>
using namespace std;
 
const int mod  =1000000007;
#define ll long long 
double arr[100005];
 
ll fast_exp(int base, int exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) 
       res=(res*base)%mod;
       base=(base*base)%mod;
       exp/=2;
    }
    return res%mod;
}
double product=1;
int main()
{
	int n;
	cin>>n;
	double mini=1000000000000000000;
	double product =1;
	for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	 mini = min(arr[i],mini);
    	 product =product*arr[i];
    }
	while(true)
	{
		if(fast_exp(mini,n)>product)
		{
			cout<<mini;
			break;
		}
		mini++;
	}
	return 0;
}
