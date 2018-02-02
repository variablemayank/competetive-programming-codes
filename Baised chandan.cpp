#include<iostream>
using namespace std;
int main()
{
	int top=-1,n,m=0,t;
	int arr[5004];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		
		cin>>n;
		if(n==0)
		{
	         int k= arr[top];
	         top--;
		}
		else
		{
			
			arr[top++]=n;
			
		}
		
	}
	for(int i=0;i<=top;i++)
	{
	
		m=m+arr[i];
	}
	cout<<m<<endl;
	return 0;
}
	
