#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char s1[100],s2[100];
	for(int i=0;i<n;i++) 
	{
	  
	  cin>>s1[i];
	  cin>>s2[i];
	}
	string s3;
	cin>>s3;
	char str[s3.length()+1][s3.length()+1];
	int i=0,j=0;
	for(int k=0;k<s3.length();k++)
    {
    		str[i][j]=s3[k];
    		j++;
		
	}
	int w=j;
	for(int i=0;i<=w;i++)
	{
		if(strcmp(str[i],s1)==0)
		strcpy(str[i],s2);
		cout<<str[i];
	}
}

