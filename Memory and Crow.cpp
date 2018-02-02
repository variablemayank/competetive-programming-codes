/*My first CodeForce Program */
/*dashu*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n,a;
    scanf("%lld%lld",&n,&a);
    for(int i=1;i<n;i++)
    {
        ll b;
        scanf("%lld",&b);
        printf("%lld ",a+b);
        a=b;
    }
    return 0;
}
