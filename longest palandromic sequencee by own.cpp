#include<iostream>
using namespace std;
int palindromesubsequence(string k)
{
	int  len=k.length(),i,j,c;
	int A[len][len];
	for(int i=0;i<len;i++)
	 A[i][i]=1;
	
	for(c=2;c<=len;c++)
	{
		for( i=0;i<len-c+1;i++)
		{
			j=i+c-1;
			if(k[i]==k[j]&&c==2) 
			A[i][j]=2;
			
			else if(k[i]==k[j]) 
			A[i][j]=A[i+1][j-1]+2;
			else 
			{
				A[i][j]=max(A[i][j-1],A[i+1][j]);
			}
		}
	}
	return A[0][len-1];
}
int main()
{
		string s;
		getline(cin,s);
		cout<<palindromesubsequence(s);
	
}

