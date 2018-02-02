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
	const int maxi =505;

	ll arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
	//int n,m,k;
	ll gcd(ll a,ll b)
	{
	   if(b==0) return a;
	   return gcd(b,a%b);
	}
	ll lcm(ll a,ll b)
	{
	    ll cal = a* b/gcd(a,b);
	     return cal;
	}
	int main()
	{
	     int t;
		 cin>>t;
		 vector<int> vec;
		 while(t-->0)
		 {
		     int n;
		     ll ans =INT_MAX;
			 cin>>n;
			 REP(i,0,n-1) cin>>arr[i];
			 REP(i,0,n-1)
			 {
			 	REP(j,i+1,n-1)
			 	{
			 	  ans = min(ans,lcm(arr[i],arr[j]));
			 	  
				}
			 }
			 vec.PB(ans);
		 }
		 REP(i,0,vec.size()-1) cout<<vec[i]<<endl;	
	} 
