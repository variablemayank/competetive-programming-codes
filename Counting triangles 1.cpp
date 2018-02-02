#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y,z,t;
	cin>>t;
	map<vector<long long>,int> m;
	vector<long long > v;
	int a[3];
    for(int i=0;i<t;i++)
    {
    
    	cin>>x>>y>>z;
    	v.clear();
    	v.push_back(x);
		v.push_back(y);
		v.push_back(z);
    	sort(v.begin(),v.end());
    	m[v]++;
	}
	int count=0;
	for(map<vector<long long >,int>::iterator it=m.begin();it!=m.end();it++)
	{
		if(it->second==1) count++;
	  
	}
	cout<<count<<endl;
}
