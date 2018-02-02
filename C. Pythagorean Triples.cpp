#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
	ll N;
	cin>>N;
	if(N<3) cout<<"-1";
	else if(N%2==0)
	{
		cout<<(N*N/4 -1)<<" "<<(N*N/4 + 1);
	}
	else cout<<(N*N-1)/2<<' '<<(N*N+1)/2;
}
