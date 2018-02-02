#include<bits/stdc++.h>
#define ll long  long 
using namespace std;
int main()
{
	int t;
	cin>>t;
	assert(t<=10);
	while(t--)
	{
	
	    ll rc,sum=0;
		cin>>rc;
		assert(rc<=100000);
		ll A[rc+1][rc+1];
	    for(int i=0;i<rc;i++)
		{
		   for(int j=0;j<rc;j++)
		   {
		   	if(i>=j) A[i][j]=i-j;
		   	else A[i][j] =j-i;
		   }
		}
		for(int i=0;i<rc;i++)
		{
			for(int j=0;j<rc;j++)
			{
				sum+=A[i][j];
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
	
}
