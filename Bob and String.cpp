#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A1[26]={0};int A2[26]={0},count=0;
	    string s1,s2;
	    cin>>s1>>s2;
	    int len1=s1.length();int len2=s2.length();
	    for(int i=0;i<len1;i++) A1[s1[i]-'a']++;
	    for(int i=0;i<len2;i++) A2[s2[i]-'a']++;
	    for(int i=0;i<26;i++)
	    {		
	    	count += abs(A1[i]-A2[i]);
		}
		cout<<count<<endl;
	    
	}
}
