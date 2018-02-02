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
	const int maxi =1005;

//	int arr[maxi];
//	int brr[maxi];
//	int crr[maxi];
//	int n,m,k;
	
	int main()
	{
		jadu;
		int n;
		cin>>n;
		vector<int> arr(n);
		REP(i,0,n-1) cin>>arr[i];
	    vector<int> prefix(n+1);
	    REP(i,0,n-1) prefix[i+1]  = prefix[i]^ arr[i];
	    ll ans = 0;
	    map<int,int> mp;
	    REP(i,0,n)
		{
			ans+= mp[prefix[i] ^prefix[n]];
			mp[prefix[i]]++;
		}
		cout<<ans<<endl;
	}
