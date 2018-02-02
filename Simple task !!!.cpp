#include<bits/stdc++.h>
using namespace std;
#define  ll long long 
int main()
{
	int t;
	ll A[3];
	cin>>t;
	while(t--)
	{
		cin>>A[0];
		cin>>A[1];
		cin>>A[2];
		sort(A,A+3);
		if(A[0]==A[1]&&A[1]==A[2]) cout<<A[0]*2<<"\n";
		else if(A[1]==A[2]) cout<<A[2]*2<<"\n";
		else cout<<A[1]*2+1<<"\n";
	}
	
	return  0;
}
