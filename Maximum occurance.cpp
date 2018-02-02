#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[1000];
	int A[1000]={0};
	int max_val=0;
	char max_char='\0';
	gets(s);
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		A[s[i]]++;
		if(A[s[i]]==max_val)
		{
			if(s[i]<max_char) max_char=s[i];
		}
		if(A[s[i]]>max_val)
		{
			max_val=A[s[i]];
			max_char=s[i];
		}	
	}
	cout<<max_char<<" "<<max_val<<endl;
}
