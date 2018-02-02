#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[1000],str2[1000];
	int p;
	cin.getline(str1,1000);
	cin.getline(str2,1000);
    int m=strlen(str1);
    int n= strlen(str2);
    for(int i=0;i<m;i++)
    {
    	if(str1[i]==5)
    	{
    		str1[i]=6;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(str2[i]==0)
		{
			str2[i]==6;
		}
	}	
	for(int i=0,j=0;i<m,i<n;i++,j++)
	{
		 p= str1[i]+str2[j];
	}
	cout<<m;
			
return 0;	
