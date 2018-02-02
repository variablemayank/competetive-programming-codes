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
//	int brr[maxi];
//	int crr[maxi];
//	int n,m,k;
	
	int main()
	{
		int arr[8];
		for(int i=1;i<=6;i++) cin>>arr[i];
		bool check =false;
		if(arr[1]+arr[2]==arr[4]+arr[5] && arr[2]+arr[3] == arr[5]+arr[6])
		cout<<"Losing\n";
		else cout<<"Winning\n";
		return 0;
	}
