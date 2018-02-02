	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (int)c.size()
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =100005;
	//int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
//	int n,m,k,l,j;
    pair<pi,int> edges[maxi];
    pi  ans[maxi];
    set<pi> s;
	int main()
	{
		jadu;
		
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			int a,b;
			cin>>a>>b;
			edges[i] =  make_pair(make_pair(a,b^1),i);
		}
		sort(edges+1,edges+m+1);
		int cur =1;
		
		for(int i=1;i<=m;i++)
		{
		
			if(edges[i].F.S == 0)
			{
				ans[edges[i].S] = {cur,cur+1};
				cur++;
			    int x =1;
			    while(s.size()<=m && x<cur-1)
			    {
			    	s.insert({x,cur});
			    	x++;
				}
			}
			else
		    {
		    	if(s.size()==0)
		    	{
		    		return cout<<"-1",0;
				}
				else 
				{
					ans[edges[i].S] = *s.begin();
					s.erase(ans[edges[i].S]);
				}
			}
		}
		
		for(int i=1;i<=m;i++)
		{
			cout<<ans[i].F<<" "<<ans[i].S<<endl;
		}
		
	}
