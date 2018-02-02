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

	//int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
	//int n,m,k;
	
	int dp[10004][11];
	
	int main()
	{
	      int t;
		  cin>>t;
		  while(t--)
		  {
		    memset(dp,0,sizeof(dp));	
		  	int n,p;
		  	cin>>n>>p;
		  	dp[1][0] = 1;
		  	for(int i =1;i<=n;i++)
		  	{
		  		for(int j =0 ;j<p;j++)
		  		{
		  		    // up row
				    dp[i+1][0]  =  (dp[i+1][0]%mod +dp[i][j]%mod)%mod;	
				    
				    if(j+1<p)
				    {
				    	dp[i+1][j+1] =dp[i][j]%mod;
					}
				}
			}
			long long sum =0;
			REP(j,0,p-1)
			sum = (sum+dp[n][j])%mod;
			cout<<sum<<endl;
		  	}
	}
