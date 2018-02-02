#include<iostream>
using namespace std;
int main()
{
	long int t;
   cin>>t;
	while(t--)
	{
	long  int x,y,n,m,var,flag;
		long int  str[n];
		cin>>x>>y>>n;
		var=x;
		
		for(int i=0;i<x;i++)
		{
			str[i]=y;
			
		}
	
		for(int j=0;j<m;j++)
		{
			
			for(int k=j;k<var;k++)
			{
				flag=0;
				flag=flag+str[k];
			
				
			}
			str[var]=flag;
			var++;
		
		}
		cout<<str[n-1];
		
	}
	return 0;
}
