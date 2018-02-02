#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int arr[a][b];
	int m =n-1;
	if(n>a*b) return cout<<"-1",0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if((i+j)%2==0)
			{
				arr[i][j]=n;
				n= max(n-2,0);
				
			}
			else
			{
				arr[i][j]=m;
				m= max(m-2,0);
			}
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
