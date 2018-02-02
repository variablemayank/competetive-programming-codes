#include"bits/stdc++.h"
using namespace std;

vector<pair<int,int >  >vec;

long binary(int key)
{
	int t= lower_bound(vec.begin(),vec.end(),make_pair(key,0)) -vec.begin();
    
    if(t== int(vec.size())|| vec[t].first!=key) --t;
    if(t==-1) return 0;
    return vec[t].second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int q;
	cin>>q;
	while(q--)
	{
		int t,n,k;
		cin>>t>>n>>k;
		if(t==1)
		{
			if(vec.size())
			{
				vec.push_back(make_pair(k,vec.back().second+n));
			}
			else
			{
				vec.push_back(make_pair(k,n));
			}
			
		}
		else
		{
			n = k-n;
			long ans  = binary(k)- binary(n-1);
			cout<<ans<<endl;
		}
	}
}
