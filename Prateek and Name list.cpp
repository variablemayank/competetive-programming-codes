#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	set<string>str;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		str.insert(s);
    }
    int A[26]={0};
	for(set<string>::iterator it=str.begin();it!=str.end();it++)
	{
		
		string s=*it;
		int len=s.length();
		for(int i=0;i<26;i++) A[s[i]-'a']++;
	}
	sort(A,A+26);
	int max=0,count=0;
	for(int i=0;i<26;i++){
		if(A[i]>max)
		{
			max=A[i];
			count=1;
		}
		else if(A[i]==max)
		{
			count++;
		}
	}
	cout<<count*max<<endl;
	
}
