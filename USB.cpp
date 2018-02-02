#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
    ll val; cin>>val;
    vector<pair<ll, string> > vec;
    ll countusb=0,countps=0;
    for(ll i=0;i<val;i++)
    {
    	ll u; string str;
    	cin>>u>>str;
    	if(str[0]=='U') countusb++;
    	if(str[0]=='P') countps++;
    	vec.push_back(make_pair(u,str));
	}
	ll sum =0;
	ll count =0;
	sort(vec.begin(),vec.end());
	//for(int i=0;i<val;i++)	 cout<<vec[i].first<<" "<<vec[i].second<<endl;
	for(ll i=0;i<val;i++)
	{
		string s = vec[i].second;
		if(s[0]== 'U')
		{
		 if(a!=0)
		 {
		 	--a;
		 	++count;
		 	sum+= vec[i].first;
		 }
		 else if(c!=0)
		 {
		 	--c;
		 	++count;
		 	sum+= vec[i].first;
		 }
		}
	    else
		{
			if(b!=0)
			{
				--b;
				++count;
				sum+= vec[i].first;
			}
			else if(c!=0)
			{
				--c;
				++count;
				sum += vec[i].first;
			}
		}
	}
	cout<<count<<" ";
	cout<<sum<<endl;
}
