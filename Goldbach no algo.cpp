#include<bits/stdc++.h>
using namespace std;
int goldbachnum(int A[],int n)
{
	int res=0;
	for(int i=2;i<n/2;i++)
	{
	
		if(A[i] && A[n-i]) 
		{
		cout<<"\nPairs are "<<i<<" "<<n-i;res++;
	    }
	}
	return res;
}

int main()
{
	int n;
	cin>>n;
	int A[32768];
	memset(A,1,sizeof(A));
	assert(n>=2&&n<=10000);
	for(int i=2;i<=sqrt(n);i++)
	{
		if(A[i])
		for(int j=i;j*i<n;j++) 
		A[i*j]=0;
	}
    cout<<"\nPrimes no are ";
	for(int i=2;i<=n;i++)
	{
		if(A[i]) cout<<i<<" ";
	}
	cout<<endl;
	cout<<"\nPossible  no to obtains greater than 4 that is pair of sum of primes no "<<goldbachnum(A,n);
}
