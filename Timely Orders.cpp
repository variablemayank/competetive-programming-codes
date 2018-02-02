#include<bits/stdc++.h>
using namespace std;

#define long long long 
#define all(x) x.begin(),x.end()
typedef pair<int,long>ii;
vector<ii>a;

long f(int p)
{
	int t =lower_bound(all(a),ii(p,0))-a.begin();
    if(t== int(a.size() or a[t].first !=p))--t;
    if(t==-1) return 0;
	return a[t].second; 
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t,x,y;
		cin>>t>>x>>y;
		if(t==1)
		{
			a.push_back(ii(y,(a.size()?a.back().second:0) +x));
			continue;
		}
		x=y-x;
		long ans= f(y)-f(x-1);
		cout<<ans<<endl;
	}
	
	
}
