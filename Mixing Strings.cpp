#include<bits/stdc++.h>
using namespace std;

string str[15]; // size of the string 
string concatenate(string a,string b)
{m
	int i,j,flag;
	for(int i=0;i<a.length();i++)
	{
		flag =0;
		for(int j=i;j<a.length();j++)
		  if((j-i)>=b.length() || b[j-i]!=a[j]) {flag =1;break;}
		if(flag==0) break;
	}
	for(int j=a.length()-i;j<b.length();j++)
	{
		a+= b[j];
	}
	return a;
}
int main()
{
	int n,ans=INT_MAX;
	cin>>n;
	int arr[n]={};
	string val;
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
		arr[i] =i;
	}
	do
	{
		val = str[arr[0]];
		for(int i=1;i<n;i++)
	    	val = concatenate(val,str[arr[i]]);
	    if(ans>val.length()) ans = val.length();
 	}while(next_permutation(arr,arr+n));
	cout<<ans<<endl;
	return 0;
}
