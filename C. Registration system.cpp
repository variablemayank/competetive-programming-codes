	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		map<string ,int> mp;
		int n;
		cin>>n;
		for(int i =0;i<n;i++)
	    {
	      string s;
	      cin>>s;
	      if(i==0)
	      {
	      	++mp[s];
	      	cout<<"OK\n";
		  }
	      else
	      {
	      	if(mp.find(s)!=mp.end())
	      	{
	      	     int t = mp[s];
	      	     cout<<s<<t<<endl;
	      	     mp[s]++;
			}
			else
			{
				mp[s]++;
				cout<<"OK\n";
			}
		  }
		}
		return 0;
	}
