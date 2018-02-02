#include<bits/stdc++.h>
using namespace std;
int main(){int  n,m;long long count=0;scanf("%d%d",&n,&m);for(int i=1;i<=n;i++){count += (m+i%5)/5;}printf("%lld",count);return 0;}
