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
	
	int main()
	{
	  jadu;
	  int t;
	  cin>>t;
	  while(t--)
	  {
	    int n;
		cin>>n;
		if(n&1)
		{
		 cout<<"BOB\n";	
	    } 
	    else cout<<"ALICE\n";
	  }	
	}
