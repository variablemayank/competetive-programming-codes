		/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (ll i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	//const int maxi =1005;

	//int arr[maxi];
	//int brr[maxi];
//	int crr[maxi];
	int n,m,k;
	map<string,int> mp;
	string to_lower(string s)
	{
		for(int i=0;i<s.length();i++)
		s[i] = tolower(s[i]);
		
		return s;
	}
	
	int main()
	{
		jadu;
		int n;
		cin>>n;
		mp["polycarp"] =1;
 		for(int i=0;i<n;i++)
		{
			string a,b,c;
			cin>>a>>c>>b;
			a = to_lower(a);
			b = to_lower(b);
		//	cout<<a<<" "<<b<<endl;
			mp[a]  = mp[b]+1;
		}
		int maxi =0;
		for(map<string,int> :: iterator it = mp.begin();it!=mp.end();it++)
		{
			maxi = max(maxi,it->second);
		}
		cout<<maxi;
	}
