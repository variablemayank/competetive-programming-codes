	#include"bits/stdc++.h"
	using namespace std;
	
	int main()
	{
		int n;
		cin>>n;
		int gcd =0;
		int maxi =0;
		for(int i=1;i<=n;i++)
		{
			int m;
			cin>>m;
			gcd = __gcd(gcd,m);
			maxi = max(maxi,m);
		}
		int ans  = maxi/gcd;
		ans = ans -n;
		if(ans&1) cout<<"Alice";
		else cout<<"Bob";
		
	}
