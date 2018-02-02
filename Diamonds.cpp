#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		
		char s[100][100]={};
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>s[i][j];
			}
		}
	
		int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(s[i][j]=='/'&&s[i][j+1]=='\\')
				{
					if(s[i+1][j]=='\\'&&s[i+1][j+1]=='/')
					{
						count++;
					}
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
