#include<bits/stdc++.h>

using namespace std;
#define MOD 1000000007
#define ll long long

ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
int main() {
        int t;
        scanf("%d",&t);
        long long xori=0;
        for(int i=0;i<t;i++)
        {
        long long val;
        scanf("%lld",&val);
        xori = val^xori;
        }
    
        if(xori==0)
        {
        long long ans = (fast_exp(2,t-1)-1+MOD)%MOD;
        ans %= MOD;
        cout<<ans;
        }
        else
        {
            cout<<"0";
        }
       
    return 0;
}

