#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
	int n,A[9]={0};
	char s1[9003];
	scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%s",&s1[i]);
    
	for(int i=0;i<n;i++) A[s1[i]-'1']++;
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
	cout<<endl;
	int girl;
	scanf("%d",&girl);
	int  count1=0,i,j; 
	for(i=1;i<=girl+1;i++)
	{
		string s2;
		
		getline(cin,s2);
		int B[9]={0};
		int count2=0;
		int len2=s2.length();
        cout<<len2;
        
		for(j=0;j<len2;j=j+2) B[s2[i]-'1']++;
		for(int i=0;i<n;i++) cout<<B[i]<<" ";
		int k;
	    for( k=0;k<n;k++)
	    {
	    	if(A[k]==B[k]) count2++;
		}
		
	}
	printf("%d",count1);
	
	
}
