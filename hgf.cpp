#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l;
		int count=0;
		cin>>l;
		string s;
		cin>>s;
		vector<int> vec;
     int p=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='H') vec.push_back(1);
		else if(s[i]=='T') vec.push_back(2);
	}
	if(vec.size()==0)
	{
		cout<<"Valid"<<endl;
	}
	else if(vec.size()%2==1)
	{
		cout<<"Invalid"<<endl;
	}
	else if(vec[0]==2) cout<<"Invalid"<<endl;
	else
	{
		
		for(int i=0;i<vec.size()-1;i++)
		{
			if(vec[i]==1&&vec[i+1]==2) 
			{
				p=1;
				i=i+1;
			}
			else
			{
				p=0;
				break;
			}
			
		}
		if(p==1) cout<<"Valid"<<endl;
			else cout<<"Invalid"<<endl;
	}
	vec.clear();
}
}
