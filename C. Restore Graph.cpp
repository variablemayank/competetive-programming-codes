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
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =100005;

	//int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
	//int n,m,k;
	vector<ll> tree[maxi];
	vector<pair<ll,ll> > ans;
	int main()
	{
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			tree[x].push_back(i);
		}
		if(tree[0].size()!=1)
		{
			cout<<"-1";
			return 0;
		}
		for(int i=1;i<=n;i++)
		{
			    if(tree[i].size()> tree[i-1].size()*k) return cout<<"-1",0;
			
			
				for(int j=0;j<tree[i].size();j++)
				{
				  ans.push_back({tree[i][j],tree[i-1][j/k]});
				}
				
				if(i==1) --k;
	    }
	    cout<<ans.size()<<endl;
	    for(int i=0;i<ans.size();i++)
	    {
	    	cout<<ans[i].first<<" "<<ans[i].second<<endl;
		}
	    
		
	}
