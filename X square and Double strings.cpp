#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int a[26]={0};
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			a[s[i]-97]++;
		}
		int count;
		for(int i=0;i<26;i++)
		{
			if(a[i]>1){
				cout<<a[i];
			 cout<<"YES\n";
			 count=1;
			 break;
			 
			}
			else count=0;
		}
		if(count==0) cout<<"NO\n";
	}
}
