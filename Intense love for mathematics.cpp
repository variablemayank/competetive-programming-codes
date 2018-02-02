#include<iostream>
using namespace std;
#define ll long long unsigned 
#define MAX 1000007
//ll A[1000][1000];//l B[1000][1000];
ll  fact(ll );
int main()
{
	int t;

	cin>>t;
	while(t--)
	{
		int   n;
		cin>>n;
		ll l=fact(n);
		cout<<l%1000000007<<"\n";
		
	}
	
}
ll fact(ll x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}
