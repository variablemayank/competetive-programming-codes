#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int l=1;
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		a  = __gcd(a,k);
		l = (ll)a * l / __gcd(a,l);
	//	cout<<l<<endl;
	}
	if(k==l) puts("Yes");
	else puts("No");
	return 0;
}
