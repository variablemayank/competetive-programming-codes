#include<bits/stdc++.h>
using namespace std;

char arr[1000][1000];
int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
           cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{   
		for(int j=0;j<m;j++)
		{
		    char  b = arr[j][i];
		    cout<<b<<b;
		}
		cout<<endl;
		for(int j=0;j<m;j++)
		{
		    char  b = arr[j][i];
		    cout<<b<<b;
		}
		cout<<endl;
	}
}
