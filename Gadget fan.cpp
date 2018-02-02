#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		int count =0;
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=a;j++)
			{
				if(i+j<=b && i<=j) count++;
				if(i>j) break;
			}
		}
		cout<<count<<endl;
	}
}
