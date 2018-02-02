#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int k=0;
		int a[8],b[8];
		char s[8][8];
		for(int i=0;i<8;i++)
		{
			cin>>s[i];
		}
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
			    if(s[i][j]=='K')
			    {
			    	a[k] =i;
			    	b[k] =j;
			    	k++;
				}
			}
		}
		if((a[0]-a[1])%4!=0 ||(b[0]-b[1])%4!=0) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
