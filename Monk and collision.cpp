#include<iostream>
using namespace std;
int main()
{
	int t,A[100],c=0,n;
	cin>>t;
	while(t--)
	{

		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
			for(int j=0;j<n-1;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					if((A[j]%10)==(A[k]%10)) {
					c++;}
					
				}
			}
		
		cout<<c<<"\n";
	}
	return =;
}
