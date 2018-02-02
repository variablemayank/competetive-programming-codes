#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[26]={0};
		string s;
		cin>>s;
		int len=s.length();
		for(int i=0;i<len;i++) a[s[i]-'a']++;
		
		char b[26];
		for(int i=0;i<26;i++)
		{
			b[i]='a'+i;
		}
		for(int i=25;i>=0;i--)
		{
			for(int j=0;j<i;j++)
			{
				if(a[j]>a[j+1]||(b[j]<b[j+1]&&a[j]==a[j+1]))
				{
					swap(a[j],a[j+1]);
					swap(b[j],b[j+1]);
				}
			}
		}
		for(int i=0;i<=25;i++) cout<<b[i]<<" ";
		cout<<endl;
		
	}
}
