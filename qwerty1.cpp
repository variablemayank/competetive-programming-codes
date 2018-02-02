#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<string > vec;
	for(int i=0;i<n;i++)
	{
		string var;
		cin>>var;
		vec.push_back(var);
	}
	if(n==1)
	{
		string value = s;
		
	    sort(value.begin(),value.end());
	    sort(s.begin(),s.end());
	 //   cout<<s<<" "<<value;
		if(s==value)
		cout<<"YES";
		else cout<<"NO";
		return 0;
	}
	for(int i=0;i<vec.size();i++)
	{
		string total = vec[i];
		for(int j=i+1;j<vec.size();j++)
		{
		  total += vec[j];
		//  cout<<total<<endl;
		  if(total.find(s) == true)
		  {
		  	cout<<"YES\n";
		  	break;
		  	return 0;
		  }
		}
	}
	for(int i=vec.size()-1;i>=0;i--)
	{
		string total = vec[i];
		
		for(int j=i-1;j>=0;j--)
		{
		   total += vec[j];
		   if(total.find(s)==true)
		   {
		   	cout<<"YES\n";
		   	return 0;
		   }
		}
	}
	cout<<"NO\n";
}
