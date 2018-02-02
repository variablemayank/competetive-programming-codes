	#include<bits/stdc++.h>
	using namespace std;
	
	#define ll long long 
	long long solve(ll b,ll r, ll c,ll cb,ll cr,ll cc)
	{
		if(b<0) b=0;
		if(c<0) c=0;
		if(r<0) r=0;
		
		ll ans = b*cb+  r*cr+ cc*c;
		return ans ;
	}
	int main()
	{
		string s;
		cin>>s;
		int bread =0;
		int sause  =0;
		int cheese =0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i] == 'B') bread++;
			if(s[i] == 'S') sause++;
			if(s[i] == 'C') cheese++;
		}
		int b_hai =0, s_hai =0, c_hai =0;
		cin>>b_hai>>s_hai>>c_hai;
		int b_cost,s_cost,c_cost;
		long long money;
		cin>>b_cost>>s_cost>>c_cost;
		cin>>money;
		long long low = 1;
		long long high = 100000000000000;
		while(low<high)
		{
			ll mid = (low+high)/2;
			if(solve(mid*bread -b_hai,mid*sause -s_hai,mid*cheese- c_hai,b_cost,s_cost,c_cost)<=money) low = mid;
			else high = mid -1;
		}
		cout<<low<<endl;
	}
