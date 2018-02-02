#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[10000];
	memset(A,1,sizeof(A));
	assert(n>=2&&n<=10000);
	for(int i=2;i<=sqrt(n);i++)
	{
		if(A[i])
		for(int j=i;j*i<n;j++) 
		A[i*j]=0;
	}
	for(int i=2;i<=n;i++)
	{
		if(A[i]) cout<<i<<" ";
	}
}
