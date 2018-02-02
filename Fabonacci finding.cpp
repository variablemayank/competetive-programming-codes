#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,n;
		cin>>a>>b>>n;
		long long  fib[n]= {0};
		fib[0] =a;
		fib[1] =b;
		for(int i=2;i<=n;i++)
		{
			fib[i] = fib[i-1] +fib[i-2];
		}
		cout<<fib[n]<<endl;
	}
}
