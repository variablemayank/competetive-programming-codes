#include<iostream>
#include<set>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		string s;
		string s2;
		set<char> s1;
		set<char> ::iterator it;
		cin>>s;
		int len=s.length();
			for(int i=0;i<len;i++)
			{
				s1.insert(s[i]);
			}
			
		    for(it=s1.begin();it!=s1.end();it++)
		    {
		       	s2[count]=*it;
		       	count++;
		    }
	       cout<<s2[0];
	     
	}
	
	return 0;
}
