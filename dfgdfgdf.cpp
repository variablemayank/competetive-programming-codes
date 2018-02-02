#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAXT 10
#define MAXN 1000000000000000
int main()
{
	ll t,n;
	ll A[20]={26,26,676,676,17576,17576,456976,456976,118811376,118811376,308915776,308915776,8031810176};
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<A[n-1]<<endl;
	}
}
