#include<bits/stdc++.h>
using namespace std;
#define all(t) t.begin(),t.end()
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int aval;
		scanf("%d",&aval);
		vector<long long > A(aval);
		vector<long long > B(aval);
		for(int i=0;i<aval;i++) scanf("%lld",&A[i]);
		for(int i=0;i<aval;i++) scanf("%lld",&B[i]);
		int mx=0;
		for(int j=0;j<aval;j++)
		{
		    int i = upper_bound(all(A),B[j])-A.begin()-1;
		    if(A[i]<=B[j]&&i>=j)
		    mx= max(mx,i-j);
	    }
	    cout<<mx<<endl;
	}
}
