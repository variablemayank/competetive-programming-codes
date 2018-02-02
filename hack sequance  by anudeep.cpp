#include <cstdio>
#define M 1000000007
#define z(a,b,c,d) ({long long t,u,v,w;t=a;u=b;v=e;w=f;a=t*e+u*g;b=t*f+u*h;t=c;c=t*v+d*g;d=t*w+d*h;a%=M;b%=M;c%=M;d%=M;})
int main(){int t;scanf("%d",&t);while(t--){long long a,b,c,d,e,f,g,h,n,m;scanf("%lld",&n);m=n;a=d=g=1;f=69;h=2014;b=c=e=0;for(n-=2;n>0;n>>=1){if(n&1)z(a,b,c,d);z(e,f,g,h);}printf("%lld\n",(b+d)%M);}}

