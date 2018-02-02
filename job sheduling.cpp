#include<bits/stdc++.h>
 
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define eps 1e-9
#define fast_cin ios_base::sync_with_stdio(false)
 
const int MOD = 1e9+7;
 
typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<int,pair<int,int> > piii;
typedef pair<ll,ll> pll;
 
ll POWER[65];
ll power(ll a, ll b) {
	return POWER[b]%MOD;
}
ll inv(ll x) {return power(x,MOD-2);}
 
void precompute() {
	POWER[0]=1;
	for(int i=1;i<63;i++) POWER[i]=POWER[i-1]<<1LL;
}
 
int main() {
/
	precompute();
	int t;
	cin>>t;
	while(t--) {
		ll l,r;
		scanf("%lld%lld",&l,&r);
		ll ans=0;
		int cnt=0;
		for(int i=61;i>=0;i--) {
			if(POWER[i]&r) {
				if(i==0 and cnt%2==0) ans++;
				else if(i!=0) ans+=power(2,i-1);
				if(ans>=MOD) ans-=MOD;
				cnt++;
			}
		}
		if(cnt%2==0) ans++;
		if(ans>=MOD) ans-=MOD;
		cnt=0;
		--l;
		ll temp=0;
		for(int i=61;i>=0;i--) {
			if(POWER[i]&l) {
				if(i==0 and cnt%2==0) temp++;
				else if(i!=0) temp+=power(2,i-1);
				if(temp>=MOD) temp-=MOD;
				cnt++;
			}
		}
		if(cnt%2==0) temp++;
		if(temp>=MOD) temp-=MOD;
		ans-=temp;
		if(ans<0) ans+=MOD;
		printf("%lld\n",ans);
	}
	return 0;
}
