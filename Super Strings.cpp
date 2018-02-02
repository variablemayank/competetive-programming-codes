#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		string s,sol;
		scanf("%s",&s);
		if(k>=2)
		{
			for(int i=0;i<n;i++)
			{
				sol= min(sol,s.substr(i,1));
			}
		}
		else 
		{
			sol=min(sol,s.substr(0,1));
			for(int i=1;i<n;i++)
			{
				sol= min(sol,s.substr(i));
			}
		}
	  cout<<sol<<endl;
	
	}
}
