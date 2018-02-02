#include<iostream>
using namespace std;
int ackermanfunction(int n,int m)
{
	if(m==0) return(n+1);
	else if(n==0) return(ackermanfunction(m-1,1));
   else
   return (ackermanfunction(m-1,ackermanfunction(m,n-1)));
}
int main()
{
	int n,m;
	cin>>n>>m;
int k=ackermanfunction(n,m);
cout<<k;
}
