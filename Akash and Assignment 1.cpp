#include<iostream>
#include<algorithm>
using namespace std;
char st[50005];
int fq[50005][26];

int main()
{
	int len,query;
	cin>>len;
	cin>>query;
	string s;
	cin>>s;
	s=s+"0";
	for(int i=1;i<=len;i++)
	{
		int k=st[i]-'a';
		for(int j=0;j<26;j++)
		{
			fq[i][j]=fq[i-1][j];
			if(j==k) fq[i][j]++;
		}
	}
	for(int i=0;i<query;i++)
	{
		int c=0;
	  int left,right,k;
	  cin>>left>>right>>k;
	  if(k>(right-left+1)) cout<<"Out of range\n";
	  
	  else
	  {
	  	for(int j=0;j<26;j++)
	  	{
		
	  	c=c+fq[right][j]-fq[left][j];
	  	if(c>=k) c=j; break;
	     }
	  }
	  cout<<c+'a';
	  
	}
}
