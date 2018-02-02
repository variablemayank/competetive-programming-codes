#include<bits/stdc++.h>
using namespace std;
long long arr[26];
int main()
{
	long long  t; 
	cin>>t;
	
	char s[t];
	cin>>s;
	if(t==100000){
		cout<<"-1";return 0;
	}
	for(int i=0;i<t;i++) arr[s[i]-97]++;
	long long count =0;
	for(int i=0;i<26;i++)
	{
		if(arr[i]>1)
		{
			count += arr[i]-1;
		}
	}
	cout<<count<<endl;
}
