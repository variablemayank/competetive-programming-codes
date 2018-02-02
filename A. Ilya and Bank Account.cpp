#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]=='-')
    {
    	if(s.length()==2) cout<<s[1];
    	else if (s.length() ==3 && s[s.length()-1]=='0') cout<<s[s.length()-1];
    	else
    	{
    		if(s[s.length()-1]>= s[s.length()-2])
    		{
    			for(int i=0;i<=s.length()-2;i++) cout<<s[i];
			}
			else
			{
				for(int i=0;i<=s.length()-1;i++)
				{
					if(i!=s.length()-2) cout<<s[i];
				}
			}
		}
	}
	else 
	{
	       cout<<s;
	}
	return 0;
}
