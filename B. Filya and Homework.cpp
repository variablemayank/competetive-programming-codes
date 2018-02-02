#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[100005];
    set<int> s;
	for(int i=1;i<=t;i++)
	{
		cin>>arr[i];
		s.insert(arr[i]);
	}
	
	if(s.size()==1) return cout<<"YES",0;
	if(s.size()==2) return cout<<"YES",0;
	if(s.size()==3)
	{
		vector<int> vec;
	    for(auto it :s)
	    {
	    	vec.push_back(it);
		}
        if(abs(vec[2]-vec[1])==abs(vec[1]-vec[0]))
        {
        	cout<<"YES";
        	return 0;
		}
		else 
		{
			cout<<"NO";
			return 0;
		}
	    
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}
