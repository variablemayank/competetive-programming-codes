#include<bits/stdc++.h>
using namespace std;
int lcs(string x,string y,int n,int m);
int increasing(string s,int n)
{
	string s1=s;
	reverse(s1.begin(),s1.end());
	return (n-lcs(s,s1,n,n));
}
int lcs(string x,string y,int n,int m)
{
	int A[n+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0) A[i][j]=0;
		    else if(x[i-1]==y[j-1])
			{
				A[i][j]=A[i-1][j-1]+1;
			}
			else 
			{
				A[i][j]=max(A[i-1][j],A[i][j-1]);
			}
		}
	}
	return A[m][n];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len=s.length();
	    cout<<increasing(s,len);
	}
}
