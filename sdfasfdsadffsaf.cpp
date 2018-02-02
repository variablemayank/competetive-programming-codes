#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<string> v;

	int val =0;
	for(int i=0;i<n;i++)
	{
			set<int> str;
	string s;
	cin>>s;
	v.push_back(s);
	for(int j=0;j<s.length();j++)
	{
		str.insert(s[j]);
	}
	if(i==0)
	{
		val = str.size();
	}
	if(val==str.size())
	{
		continue;
	}
	else
	{
		return cout<<"-1",0;
	}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			string s1 = v[i];
			string s2 = v[j];
			sort(s1.begin(),s1.end());
			sort(s2.begin(),s2.end());
			if(s1!=s2) 
			return cout<<"-1",0;
			
			reverse(s2.begin(),s2.end());
			reverse(s1.begin(),s1.end());
			if(v[i]==s1||v[j]==s2)
			return cout<<"-1",0;
		}
	}
	int maxi =INT_MAX;
	for(int k=0;k<n;k++)
	{
		int count =0;
	
	for(int i=0;i<n;i++)
	{
		if(v[k]==v[i])
		{
			continue;
		}
		else
		{
			
			string sol= v[i];
			int counti=0;
		//	cout<<sol<<endl;
			while(v[k]!=sol&& counti!=v[k].length())
			{
				char str = sol[0];
			    sol.erase(sol.begin());
				sol += str;
				count++;
				counti++;
			}
			v[k] =sol;
		}

	}
	maxi = min(count,maxi);

    }
    cout<<maxi<<endl;
}
