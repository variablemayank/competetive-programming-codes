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

	////int arr[maxi];
//	int brr[maxi];
//	int crr[maxi];
	int n,x,y;
	
	int main()
	{
		jadu;
		cin>>n>>x>>y;
		n/=2;
		if((x==n||x==n+1) && (y==n || y==n+1))cout<<"NO";
		else cout<<"YES";
	}
