#include<iostream>
using namespace std;
int main()
{
	int t,n,count=0,A[100],found;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n*2;i++)
		{
			cin>>A[i];
		}
		for(int i=0;i<n*2;i++)
		{
			for(int j=i;j<n*2;j++)
			{
				if(A[i]==A[j])
				found =1;
				else
				count++;
			}
		}
		cout<<count%2;
	}
}
