#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int p=0,q=0;
		cin>>n;
		int a[n+10];
		if(n%2==0) cout<<"no"<<endl;
		else
		{
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			if(a[0]!=1)
			{
				cout<<"no"<<endl;
			}
			else
			{
				for(int i=0;i<n/2;i++)
				{
					if(a[i]-a[i+1]==-1)
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
				else
				{
					int r=0;
					for(int i=n/2;i<n-1;i++)
					{
						if(a[i]-a[i+1]==1 && (a[i+1]<a[n/2]))
						{
							r=1;
						}
						else
						{
							r=0;
							break;
						}
					}
					if(r==0) cout<<"no"<<endl;
					else cout<<"yes"<<endl;
				}
				
        	}

		}
	}
}
