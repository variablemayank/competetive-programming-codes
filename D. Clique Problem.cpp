#include<bits/stdc++.h>
using namespace std;

pair<long long ,long long > p[200010];

int main()
{
	long long int n;
	cin>>n;
	for(long long int i=0;i<n;i++)
	{
		long long int x,w;
		cin>>x>>w;
		p[i].first = x+w;
		p[i].second = x-w;
	}
	sort(p,p+n);
	long long pos = INT_MIN;
	long long ans =0;
	for(int i=0;i<n;i++)
	{
		if(pos<=p[i].second)
		{
			ans++;
			pos =  p[i].first;
		}
	}
	cout<<ans<<endl;
}
