#include<iostream>
using namespace std;
int main()
{
	int n,m;
	long long A[100][100];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}
	}
	
	int t;
	cin>>t;
	while(t--)
	{
		int key,count=0;
		cin>>key;
		int i=0,j=m-1;
		while(i<m&&j>=0)
		{
			if(A[i][j]==key)
			{
				cout<<i<<" "<<j<<endl;
				count=1;
				break;
			}
			if(A[i][j]>key)
			{
				j--;
			}
			else
			{
				i++;
			}
		}
		if(count==0) cout<<"-1"<<" "<<"-1"<<endl;
	}
}
