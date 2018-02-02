#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,m,res,k,l,r,L,base=1000000007;

void cal(ll m){
    k=n/m;
    r=n%m%base;
    l=n/(k+1)+1;
    L=(m-l+1)%base;
    res=(res+L*r+k%base*(L*(L-1)/2%base))%base;
    if (l-1) cal(l-1);
}

main(){
    cin>>n>>m;
    cal(m);
    cout<<res;
}
