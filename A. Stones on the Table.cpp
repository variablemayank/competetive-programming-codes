#include<bits/stdc++.h>
using namespace std;

long long main()
{
	long long n;
	cin>>n;
	string s;
	cin>>s;
	long long count =0;
	for(long long i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1]) count++;
    }
    cout<<count<<endl;
}
