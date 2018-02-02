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
	//const long long int  maxi =1e18;

//	int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
	//int n,m,k;
	
	int main()
	{
	  	int t;
	  	cin>>t;
	  	while(t--)
	  	{
	  	  ll n;
	  	  cin>>n;
	  	  vector<int> vec;
	      for(int i=1;i*i<=n;i++)
	      {
	      	 if(n%i==0)
	      	 {
	      	    ll y = n/i;
				vec.push_back(y-i);	
			 }
		  }
		  sort(vec.begin(),vec.end());
		  cout<<vec[0]<<endl;
		}
	}
