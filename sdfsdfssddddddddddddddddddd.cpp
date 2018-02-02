#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define eps 1e-9
const int MOD = 1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
ll POWER[65];
ll power(ll a, ll b) {ll ret=1;while(b) {if(b&1) ret*=a;a*=a;if(ret>=MOD) ret%=MOD;if(a>=MOD) a%=MOD;b>>=1;}return ret;}
ll inv(ll x) {return power(x,MOD-2);}
void precompute() {
	POWER[0]=1;
	for(int i=1;i<63;i++) POWER[i]=POWER[i-1]<<1LL;
}
const int MAXN = 1e3+3;
char str[MAXN];
int fre[MAXN];
int main() {
	// freopen("TASK.in","r",stdin);freopen("TASK.out","w",stdout);
	precompute();
	scanf("%s",str+1);
	int len=strlen(str+1);
	assert(len>=1 and len<=1000);
	char ch;
	cin>>ch;
	int p;
	cin>>p;
	assert(p>=1 and p<=len);
	if(p==1) {
		bool f=false;
		for(int i=1;i<=len;i++) if(str[i]==ch) f=true;
		if(f) cout<<-1<<endl;
		else cout<<len<<endl;
		return 0;
	}
	if(str[1]==ch) fre[1]=1;
	else fre[1]=0;
	for(int i=2;i<=len;i++) {
		fre[i]=fre[i-1];
		if(str[i]==ch) fre[i]++;
	}
	int maxim=-1;
	for(int i=p;i<=len;i++) maxim=max(maxim,fre[i]-fre[i-p]);
	int ans=-1;
	for(int i=p-1;i<=len;i++) {
		int Z = fre[i]-fre[i-(p-1)];
		Z++;
		if(Z==maxim+1) ans=i;
	}
	cout<<ans<<endl;
	return 0;
}
