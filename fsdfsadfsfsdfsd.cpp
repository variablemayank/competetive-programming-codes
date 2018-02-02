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
	int left = 0;
	int right = s.length();
	bool flag = false;
	int last = 0;
	for(int i=right-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
		
		last =i;
		break;
	    }
	}
	int first ;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			first =i;
			break;
		}
	}
	
	set<char> arr;
	
	for(int i=0;i<s.length();i++) arr.insert(s[i]);
	if(arr.size()==1 && *arr.begin() == '0')
	cout<<"NO\n";
	else
	{
	
	//cout<<first<<last;
	while(first<=last)
	{
		if(s[first]=='1' && s[last]=='1')
		{
			first++;
			last--;
		//	cout<<first<<" "<<last<<endl;
		}
		else
		{
			cout<<"NO\n";
			flag = true;
			break;
		}
	}
    
	

	if(flag==false  ) 
	cout<<"YES\n";
    }
}
}
