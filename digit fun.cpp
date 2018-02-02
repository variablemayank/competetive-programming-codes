#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
	ll l,r;
	cin>>l>>r;
	ll f[11];
	ll my[11];
	memset(f,0,sizeof(f));
	memset(my,0,sizeof(my));
	for(int i=0;i<=9;i++){
		ll x;
		cin>>x;
		my[i]=x;
		f[i]=x;
	}
	sort(my,my+9);
	if(my[0]==0 && my[9]==0)
	{
		cout<<r-l+1<<endl;
		continue;
	}
	
	ll ans=0;
	ans=r-l+1;
	int freq[11];

	for(ll i=l;i<=r;i++){
		ll x=i;
		memset(freq,0,sizeof(freq));
		
		
		int r;
		r=0;
		while(x!=0){
			 r=x%10;
			freq[r]++;
			x=x/10;
		}
		for(int i=0;i<=9;i++){
			if(freq[i]==f[i]){
			ans--;
			break;
		}
	}
		
		
	}
	cout<<ans<<endl;
}
	
}
