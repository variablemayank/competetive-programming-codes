#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,h;
	cin>>n>>h;
	vector<pair<long long,long long> > vec;
	for(long long i=0;i<n;i++)
	{
		long long a,b;
		cin>>a>>b;
	    vec.push_back(make_pair(a,b));
	}
	long long  count =0;
	for(long long i=0;i<n;i++)
	{
		for(long long j= i+1;j<n;j++)
		{
		
		if( ((vec[i].second >0 && vec[j].second<0 )|| (vec[i].second<0 &&vec[j].second >0 )) && (vec[i].first <vec[j].first &&abs(vec[i].second-vec[j].second)<=h))
		{
			count++;
		}
	    }
	}
	cout<<count<<endl;

}
