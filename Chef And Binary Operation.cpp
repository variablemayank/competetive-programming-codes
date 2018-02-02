#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int count =0;
		int count1=0;
		int countone=0;
		int countzero=0;
	    for(int i=0;i<s1.length();i++)
	    {
	    	if(s1[i]=='0') countzero++;
	        if(s1[i]=='1') countone++;
	    	if(s1[i]=='0' &&s2[i]=='1')
			{
			  count++; 
			  
		    }
	        if(s1[i]=='1' && s2[i]=='0')
			{
			  count1++;
		    }
		}
		//cout<<countzero<<endl;
		//cout<<countone<<endl;
		if(countzero ==s1.length() ||countone==s1.length())
		cout<<"Unlucky Chef\n";
		else 
		{
		cout<<"Lucky Chef\n";
		cout<<max(count,count1)<<endl;
	    }
 	}
}
