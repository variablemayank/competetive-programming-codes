#include<bits/stdc++.h>
using namespace std;
//int Max(int a,int b){ return(a>b?a:b);}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int A[26]={0};
    	string s;
    	cin>>s;
    	int len=s.length();
    	int count=0;
    	for(int i=0;i<len;i++) A[s[i]-'a']++;
    	for(int i=0;i<26;i++)
    	{
    		count+=A[i]%2;
    	}
    	count=max(count,0);
        cout<<count<<endl;
    }
	
}
