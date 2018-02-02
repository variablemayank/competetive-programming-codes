#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
	return p1.second<p2.second;
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
//	sort(vp.begin(),vp.end(),compare);
//	sort(vec.begin(),vec.end());
//	cout<<vp[0].second<<endl;
//	cout<<vec[vec.size()-1].first<<endl;
//	int a = vp[0].second;
////	int a2 = vp[0].first;
//	int b = vec[vec.size()-1].first;
//	int b2 = vec[vec.size()-1].second;
	//Aacout<<a<<" "<<a2<<" "<<b<<" "<<b2<<endl;
     
     int min1= INT_MAX ,max1 = INT_MIN;
     int mini = INT_MAX,maxi = INT_MIN;
    for(int i=0 ;i<n;i++)
    {
    	max1  = max(max1,vp[i].first);
    	min1 = min(min1,vp[i].second);
	}
	for(int i=0;i<k;i++)
	{
		 maxi = max(maxi,vec[i].first);
		 mini = min(mini,vec[i].second);
	}
	//cout<<max1<<" " <<min1<<endl;
//	cout<<maxi<<" "<<mini<<endl;
	int diff = max(max(0,maxi-min1),max1-mini);
	cout<<diff;
}
