#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int  A[len][len];
	for(int i=0;i<len;i++)
	{
		A[i][i]=1;
	}
	for(int i=2;i<=len;i++)
	{
		for(int j=0;j<len-i+1;j++)
		{
			int k=j+i-1;
			if(s[i]==s[k])
			{
				A[i][k]=A[i+1][k-1]+2;
			}
			else
			{
				A[i][k]=max(A[i+1][k],A[i][k-1]);
			}
		}
	}
	cout<<A[0][len-1];
	return 0;
}

