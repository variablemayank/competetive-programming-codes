#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[1000000];
ll f[1000000];
int main(){
	ll n;cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	ll q;cin>>q;
	for(int i=1;i<=q;i++){
         int x;int y;
         cin>>x>>y;
         for(int i=x;i<=y;i++){
         	f[i]=f[i]+1;
		 }
	}
	for(int i=1;i<=n;i++){
		if(f[i]%2==0)
		{
			a[i]=a[i];
		}
		else{
			swap(a[i],a[n-i+1]);
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
