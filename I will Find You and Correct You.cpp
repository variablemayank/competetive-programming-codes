#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[1000];
		int A[26]={0};
		gets(s);
		int len=strlen(s);
		for(int i=0;i<len;i++) 
		{
		
		if(s[i]!=' ') A[s[i]-'a']++;
	   }
		sort(A,A+26); cout<<A[len]<<endl;
		
	}
}
