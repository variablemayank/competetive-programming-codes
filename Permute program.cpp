#include<bits/stdc++.h>
using namespace std;
int n=0;

void permute(string s,int start,int end)
{

	//vector<string> ::iterator it;
	int i;
	if(start==end)
	{
	k.push_back(s);
	n++;}
	else
	{
		for(i=start;i<end;i++)
		{
			swap(s[start],s[i]);
			permute(s,start+1,end);
			swap(s[start],s[i]);
		}
	}
    //for(it=k.begin();it<k.end();it++) 
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
		permute(s,0,s.length());
	   cout<<k[2]<<" "<<k[n-3];
	}
}
