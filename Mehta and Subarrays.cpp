#include<bits/stdc++.h>
using namespace std;
 
#define mp(x,y)  make_pair(x,y)
#define pb(x) push_back(x)
int main()
{
	vector<pair<long long,int> >v;
	int len,cnt,mn;
	long long sum,x;
	sum=len=cnt=0;
	int n;
	
	cin>>n;
	
	v.pb(mp(0,1));
	
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		sum+=x;
		v.pb(mp(sum,i+1));
	}
	sort(v.begin(),v.end());
	mn=v[0].second;
	cout<<"mn "<<mn<<endl;
	for(int i=1;i<=n;i++)
	{
		int val =max(0,v[i].second-mn);
		if(val>len)
		{
			len=val;
			cnt=1;
		}
		else if(val==len) cnt++;
		mn=min(mn,v[i].second);
		
	}
	if(len==0) cout<<"-1\n";
	else cout<<len<<" "<<cnt<<endl;
	return 0;
	
}
