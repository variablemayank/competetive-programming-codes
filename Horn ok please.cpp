#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<cmath>
int main()
{
	int  t;
	scanf("%d",&t);
	while(t--){
	
     int  n;
	scanf("%d",&n);
	int A[10001];
	int j;
	A[1]=0;
	int var;
	for(int i=1,j=1;i<=n;i++,j++) 
	{
		if(__gcd(i,n)==i)
		{
		A[j]=A[j]+i;
		var=j;
	    }
	}
	cout<<A[var];
	cout<<j;
	if(A[j]==n*2) cout<<"YES\n";
	else cout<<"NO\n";
}
}
