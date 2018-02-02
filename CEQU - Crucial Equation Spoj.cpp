#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	int e=1;
	while(t--)
	{
      long long a,b,c; scanf("%lld%lld%lld",&a,&b,&c);
       long long d =__gcd(a,b);
       if(c%d==0) printf("Case %d: Yes\n",e++);
       else printf("Case %d: No\n",e++);
       
	}
}
