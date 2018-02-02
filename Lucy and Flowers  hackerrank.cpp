#include <bits/stdc++.h>

using namespace std;
 
int MOD=1000000009,mod=1000000009;
const int MAX=6000;
long long T[MAX],sol[MAX];
long long fact[MAX],invfact[MAX],modInverse[MAX];

void inverseArray() 
{
    modInverse[1] = 1;
    for(int i = 2; i <= MAX; i++) 
    {
        modInverse[i] = (-(MOD/i) * modInverse[MOD % i]) % MOD + MOD;
                invfact[i]=(invfact[i-1]*modInverse[i])%MOD;
    }
}

void factgen()
{
    fact[0]=1;
    invfact[0]=1;
    fact[1]=1;
    invfact[1]=1;
    for(int i=2;i<=MAX;i++)
    {
        fact[i]=((long long)(fact[i-1]*i))%MOD;
    }
}

long long comb(int n,int r)
{
    if(n<r)
        return 0;
    if(n==r||r==0)
        return 1;
    long long ans;
    ans=(((fact[n]*invfact[r])%MOD)*invfact[n-r])%MOD;
    return ans;
}

void catalangen()
{
        T[0]=1;
    T[1]=1;
    T[2]=2;
        for(int i=3;i<MAX;i++)
    {
        T[i]=((((2*(2*(i-1)+1)*T[i-1]))%mod)*modInverse[((i-1)+2)])%mod;
    }
}

int main() {
    //freopen ("input_sorted.in","r",stdin);
    //freopen ("myoutput.txt","w",stdout);
    factgen();
    inverseArray();
    catalangen();
    for(int i=0;i<5001;i++) 
    {
            for(int j=0;j<=i;j++) 
            {
                sol[i]+=(comb(i,j)*T[j])%MOD;
                sol[i]%=MOD;
            }
    }
    
    int t;
    scanf("%d",&t);
    assert(1 <= t && t<=5000);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        assert(n>0&&n<=5000);
        printf("%lld\n",(sol[n]-1+MOD)%MOD);
    }
    return 0;
