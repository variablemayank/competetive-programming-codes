#include<iostream>
using namespace std;
int main()
{
	int  t,x,y,k,l,f;
	char A[21][21];
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>A[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(A[i][j]=='*')
				{
				    x=i;
				    y=j;
				}
			}
		}
	f=(n-1)/2;
	if(x>=f&&y>=f)
	{
		k=x-f;
		l=y-f;
		cout<<k+l<<"\n";
	}
	else if(x<=f&&y>=f)
	{
		k=f-x;
		l=y-f;
		cout<<k+l<<endl;
	}
	else if(x>=f&&y<=f)
	{
		k=x-f;
		l=f-y;
		cout<<k+l<<endl;
	}
	else 
	{
		k=f-x;
		l=f-y;
		cout<<k+l<<endl;
	}
	}
	return 0;
}
