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
    
    const int mod = 1000000007;
	const int maxi =3001;
	int arr[maxi];
	int brr[maxi];
//	int crr[maxi];
	int n,m,k,l,j;
	int main()
	{
		int order[maxi];
		int n,a,b;
		cin>>n>>a>>b;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			order[arr[i]] =i;
		}
		for(int i=1;i<=n;i++) cin>>brr[i];
		for(int i=a;i<=b;i++)
		{
			if(order[brr[i]]>=a && order[brr[i]]<=b||(order[brr[i]]>a &&order[brr[i]]<=b && order[brr[i]]>=a && order[brr[i]]<b ))
			continue;
			else return cout<<"LIE",0;
		}
		cout<<"TRUTH";
	    
	    
	    
	}
