#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count =0;
		for(int i=0;i<s.length()-1;i++)
		{
		    if(s[i]>s[i+1])
		    {
		    	if(s[i]-s[i+1]==1) count++;
		    	if(s[i]-s[i+1]==25) count++;
			}
			if(s[i+1]>s[i])
			{
				if(s[i+1]-s[i]==1) count++;
				if(s[i+1]-s[i]==25) count++;
			}
	    }
		if(s.length()-1==count) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
