#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define wl(n) while(n--)
#define fr(i,a,b) for(i=a;i<b;i++)
#define ll long long
#define nl printf("\n")
#define INF (1LL<<52)
 
bool debug = true;
ll L[100005], Q[100005];
int n;
 
int fun(ll target)
{
	int i,l=0,u=n,max=0,dist;
	fr(i,0,n)
	{
		if(L[i]>=target)
		{
			max=u-i;
			u=i-1;
			break;
		}
	}
 
	while(l <= u)
	{
		dist=target-L[u];
		l=l+dist;
		if(l<=u)
		{
			max++;
			u=u-1;
		}
	}
	return max;
}
 
int main()
{
	int t,i,q;
 
	cin>>t;
	wl(t)
	{
		cin>>n>>q;
 
		fr(i,0,n)
		  cin>>L[i];
 
		sort(L,L+n);
 
		fr(i,0,q)
		{
		  cin>>Q[i];
		  cout<<fun(Q[i]);nl;
		}
 
	}
	return 0;
}
