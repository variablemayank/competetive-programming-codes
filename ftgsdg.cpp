#include<bits/stdc++.h>
using namespace std;
#define MAX 70
int top=-1;
void push(string *s[],int n,int k)
{

 for(int i=n+1;i<k;i++)
 {
 	s[i]=s[i+1];
 	k--;
 	
 }
 cout<<*s;
}
int main()
{
	string s;
	scanf("%[^/n]",&s);
	int k=s.length();
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='-'&&s[i+1]=='>')
		{
			push(&s,i,int k);
		}
	}
	return 0;
}
