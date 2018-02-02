#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int c[n];
	int t[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		cin>>t[i];
	}
	int freq[n];
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			freq[i]= c[i]*t[i];
		}
		else
		{
			freq[i] = freq[i-1] + (c[i]*t[i]);
		}
	}
	int j=0;
	for(int i=0;i<m;i++)
	{
		int chk;
		cin>>chk;
		while(freq[j]<chk) j++;
		cout<<j+1<<endl;
	}
}
