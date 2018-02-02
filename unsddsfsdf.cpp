#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define wl(n) while(n--)
#define fr(i,a,b) for(i=a;i<b;i++)
#define ll long long
#define nl printf("\n")
#define INF (1LL<<52)
 
bool debug = true;
ll L[100005], Q[100005];
int n;

int index[100005];
int cum[100005];

int fun(ll target)
{
	int i,l=0,u=n,max=0,dist;
	fr(i,0,n)
	{
		if(L[i]>=target)
		{
			max=u-i;
	
			u=i-1;	
			trace2(max,u);
			break;
		}
	}
 
	while(l <= u)
	{
		dist=target-L[u];
		trace1(dist);
		l=l+dist;
		trace1(l);
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
