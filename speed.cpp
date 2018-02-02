#include<iostream>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long i,n,count=1,min;
		cin>>n;
		long long A[n+1];
		for(i=0;i<n;i++)
		{
			cin>>A[i];
		}
		min=A[0];
		for(i=1;i<n;i++)
		{
			if(A[i]<=min) 
			{
				++count;
				min=A[i];
		    }
		}
		cout<<count<<endl;
	}
}
