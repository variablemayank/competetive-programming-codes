#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	int N;
	cin>>N;
	priority_queue<pair<long long ,long long> > pq;
	map<long long, long long > mp;
	for(int i=0;i<N;i++)
	{
		long long id,z,p,l,c,s,cal,change;
		scanf("%lld%lld%lld%lld%lld%lld",&id,&z,&p,&l,&c,&s);
		cal=p*50+l*5+c*10+s*20;
		change=cal-z;
        mp[id]=cal;
        pq.push(make_pair(change,id));
    }
    for(int i=0;i<5;i++)
    {
       printf("%lld %lld",pq.top().second,mp[pq.top().second]);
       pq.pop();
       printf("\n");
	}
	return 0;
}
