#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,counteven=0,countodd=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
		 int val;
		 cin>>val;
		 if(val&1) counteven++;
		 else countodd++;
		}
		cout<<counteven*countodd<<endl;
	}
}
