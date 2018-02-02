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
	//int brr[maxi];
	//int crr[maxi];
	int n,m,k,l,j;
	int main()
	{
		jadu;
		int color;
		cin>>color;
		set<int> s;
		int mini = INT_MAX;
		for(int i=1;i<=9;i++)
		{
		    int var;
		    cin>>arr[i];
		    s.insert(arr[i]);
		    mini = min(mini,arr[i]);
		}
		
		int len  = color/mini;
		//cout<<mini;
		if(len==0) return cout<<"-1",0;
		set<int> ::iterator it;
		
		for(it = s.begin();it!=s.end();it++)
		{
			cout<<*it;
		}
	    
	}
