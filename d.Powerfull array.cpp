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
    
    ll  cnt[1000006];
 
    ll  arr[234567];
    ll result=0;
    ll ans[234567];
    int bsize;
    
    std:: pair<pair<ll,ll>,int> query[234567];
    bool comp(const pair<pi,int> &a ,const pair<pi,int> &b)
    {
    	int lblock = a.first.first/ bsize;
    	int rblock = b.first.first/bsize;
    	
    	if(lblock != rblock)
    	{
    		return lblock<rblock;
		}
		return a.first.second < b.first.second;
	}
	
	
    void update(ll a, ll b)
    {
    	result += 2* b * cnt[a] *a + a;
    	cnt[a] += b;
	}
    
    void add( ll x)
    {
    	update(x,1);
    }
	
	void remove(ll x)
	{
		update(x,-1);
	}
	
	int main()
	{
		
		
		    //jadu;
		    int  n,m;
			scanf("%d%d",&n,&m);
			bsize = static_cast<int>(sqrt(n));
			for(int i=0;i<n;i++)
			{
				scanf("%I64d",&arr[i]);
			}
		//	cout<<m;
			for(int i=0;i<m;i++)
			{
				ll l,r;
				scanf("%I64d%I64d",&l,&r);
				query[i].F.F =  l-1;
				
				query[i].first.second = r-1;
				query[i].second  =i;
			}
			
			sort(query,query+m,comp);
			int mo_left = 0;
			int mo_right =-1;
			
			for(int i=0;i<m;i++)
			{
				ll left = query[i].first.first;
				ll right = query[i].first.second;
				
				while(mo_right<right)
				{
					mo_right++;
				    add(arr[mo_right]);
				}
				while(mo_right>right)
				{
					remove(arr[mo_right]);
					mo_right--;
				}
				while(mo_left<left)
				{
					remove(arr[mo_left]);
					mo_left++;
				}
				while(mo_left>left)
				{
					mo_left --;
					add(arr[mo_left]);
				}
			    ans[query[i].second] = result;
			}
			
			for(int i=0;i<m;i++)
			{
				printf("%I64d\n",ans[i]);
			}
	}
			
