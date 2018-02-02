#include<iostream>
using namespace std;
#define  ll  long long 
int main()
{
	int t;
	cin>>t;
	int A[100001];
	while(t--)
	{
		int n;
		ll sum=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			
		}
		for(int i=0;i<n;i++)
		{
		   if(A[i]%2!=0) 
		   sum=sum+A[i];
		}
		cout<<sum<<endl;
}
return 0;
}
		

