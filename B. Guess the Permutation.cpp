#include<bits/stdc++.h>
using namespace std;
int arr[50][50],sol[50];
	
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
		 cin>>arr[i][j];
		 sol[i]= max(sol[i],arr[i][j]);
	    }  
	}
	for(int i=0;i<t;i++)
	{
		if(sol[i]==t-1)
		{
			sol[i]=t;
			break;
		}
	}
	for(int i=0;i<t;i++){
		cout<<sol[i]<<" ";
	}
}
