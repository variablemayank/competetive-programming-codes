#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	string s[20];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	
	int count =0;
	int cur =0;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<m+2;j++)
		{
            if(s[i][j]=='1')
		    {
		   	   count += abs(cur-j);
		   	   cur = j;
			}		
			
		}
		int mini = min(abs(cur),abs(m+2 - cur));
		count+= mini+1;	
	}
	cout<<count<<endl;

}
