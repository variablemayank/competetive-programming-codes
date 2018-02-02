#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int > > vp[1005];
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> vec(1005); for(int i=1;i<=n;i++) cin>>vec[i];
	
    for(int i=1;i<=m;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	vp[u].push_back(make_pair(vec[v],v));
    	vp[v].push_back(make_pair(vec[u],u));
	}
//	for(int i=1;i<=n;i++)
//	cout<<vp[i].size()<<" ";
	
	for(int i=1;i<=n;i++) sort(vp[i].begin(),vp[i].end());
	
	
    for(int i=1;i<=n;i++)
	{
		if(vp[i].size()>=k) 
		{
		//	cout<<vp[i][vp[i].size()-k].first<<endl;
		cout<<vp[i][vp[i].size() -k].second<<endl;
	     }
	    else cout<<"-1\n";
	}
	return 0; // bye bye
}
