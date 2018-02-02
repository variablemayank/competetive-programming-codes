#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int p=0;
		cin>>n;
		int a[n+10];
		int b[n+10];
		memset(b,0,sizeof(b));
	 
	
	   	for(int i=1;i<=n;i++)
	   	{
	   		cin>>a[i];
		}
		 if(n%2==0) cout<<"no"<<endl;
		 else
		 {
		int mid=n/2+1;
		for(int i=1;i<=mid;i++)
		{
			b[i]=i;
		}
		int val=mid;
		for(int i=val+1;i<=n;i++)
		{
			mid--;
			b[i]=mid;
		}
	/*	for(int i=1;i<=n;i++)
		{
			cout<<b[i]<<" ";
		}
		*/
		for(int i=1;i<=n;i++)
		{
			if(a[i]==b[i])
			{
				p=1;
			}
			else
			{
				p=0;
				break;
			}
		}
		if(p==0) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
		
	   }
		
	}
}
