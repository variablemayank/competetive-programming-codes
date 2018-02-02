#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
	return p1.second<p2.second;
}
int maxi(int a,int b){
	if(a>b)
	return a;
	return b;
}
int main()
{
	vector<pair<int,int> >vp;
	vector<pair<int,int> > vec;
	int n;
	cin>>n;
	for(int i=0;i<n;i++) 
	{
	   int u,v;
	   cin>>u>>v;
		vp.push_back(make_pair(u,v));
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		int u,v;
		cin>>u>>v;
		vec.push_back(make_pair(u,v));
	}
	int max=0;
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
				int a = vp[i].second;
			int b=vec[j].first;
			if(b>a){
			int diff=b-a;
			ans=maxi(diff,ans);
	
			
		}
	}
	
}
cout<<ans<<endl;
}
