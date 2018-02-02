#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>>s;
	if(s.size()==1)
	{
		int n = s[0]-'0';
		return cout<<1,0;
	}
	int n = s[0]-'0';
	n++;
	for(int i=0;i<s.length()-1;i++){
		n= n*10;
	}
	int count =0;
	int myint = stoi( s);
	//cout<<myint;
	cout<<n-myint;
 
}
