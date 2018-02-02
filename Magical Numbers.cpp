#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		int sum=0;
		cin>>s;
		
	    for(int i=0;i<s.length();i++)
	    {
	    	for(int j=i,k=i;j>=0,k<s.length();j--,k++)
	    	{
	    		if(s[j]==s[k])
				sum+=pow((k-j+1),2);
	    		else
	    		break;
			}
	    }
	    for(int i=0;i<s.length()-1;i++)
	    {
	    		for(int j=i,k=i+1;j>=0,k<s.length();j--,k++)
			{
				if(s[j]==s[k])
				sum+=pow((k-j+1),2);
				else break;
			}
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
