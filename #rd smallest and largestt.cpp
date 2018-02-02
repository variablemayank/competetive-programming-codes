#include<bits/stdc++.h>
using namespace std;
void permute(string s,int start,int end)
{
	int i,k;
	if(start==end)
	cout<<s<<"\n";
	else
	{
		for(i=start;i<end;i++)
		{
			swap(s[start],s[i]);
			permute(s,start+1,end);
			swap(s[start],s[i]);
		}
	}
}

int main()
{
	int t;
	cin>>t;
	//vector<int> v;
	//vector<int> ::iterator it;
	
	while(t--)
	{
		char max_='0';
		char min_='9';
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length();i++)
	    {
	    	max_=max(max_,s[i]);
	    	min_=min(min_,s[i]);
		}
		permute(s,0,s.length());
	
	    
	}
}
