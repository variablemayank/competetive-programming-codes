#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long  n,m;
	long long count=0;
    scanf("%lld%lld",&n,&m);
    for(int i=1;i<=n;i=i++)
    {
        count += (m+i%5)/5;
	}
	printf("%lld",count);
}
