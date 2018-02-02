#include<iostream>
#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>
#define s(n) scanf("%d", &n)
#define s2(a,b) scanf("%d %d",&a, &b)
#define ss(n) scanf("%s",n)
#define pb push_back
#define vi vector<int>
using namespace std;
long double tmp;
long long int n,m,res;
int main()
{
 
	scanf("%lld %lld",&n,&m);
	//res=m;
	tmp=n;
	tmp=tmp*2;
//	cout<<tmp<<"\n";
long double x=m;
	tmp=tmp-(((8*x)+1)/4);
//	cout<<tmp<<"\n";
	tmp=sqrt(tmp);
//	cout<<tmp<<"\n";
	tmp=tmp-0.5;
//	cout<<tmp<<"\n";
	tmp=ceil(tmp);
//	cout<<tmp<<"\n";
	res=tmp+m;
	printf("%lld\n",res);
 
}
