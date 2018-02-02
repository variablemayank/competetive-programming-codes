#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long unsigned  n;
		cin>>n;
	    int ans = __builtin_popcountll(n);
	    cout<<ans<<endl;
	}
}
