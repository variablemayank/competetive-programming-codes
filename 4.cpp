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
	const int maxi =500005;

	int arr[maxi];
//	int brr[maxi];
//	int crr[maxi];
//	int vn,m,k;
	vector<int > vec[maxi];
	int main()
	{
		int n;
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			int u,v;
			cin>>u>>v;
			vec[u].push_back(v);
			vec[v].push_back(u);
			
		}
		long long sum =0;
		for(int i=1;i<=n;i++)
		{
			if(vec[i].size()>2)  sum+= (vec[i].size()-2);
		}
		cout<<sum<<endl;
	}
