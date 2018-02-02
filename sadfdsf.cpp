#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
    set<pair<int,int> > adj;
    for(int i=0;i<n;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	if(__gcd(a,b)>k)
         adj.insert(make_pair(a,b));
	}
	int b1,b2;
	cin>>b1>>b2;
	for(set<pair<int,int> > ::iterator it = adj.begin(); it!= adj.end();it++)
	{
		if(it->first==b1 && it->second ==b2)
		{
			cout<<"Possible\n";
			return 0;
		}
		
	}
	cout<<"Not Possible\n";
	return 0;
	
    
}
