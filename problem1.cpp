#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n;
	cin>>n;
	ll sum1=0;ll sum2=0;
	for(int i=1;i<=n-1;i++){
		ll  x;ll  y;
		cin>>x>>y;
		sum1+=x;
		sum2+=y;
	}
	ll x;ll  y;
	cin>>x>>y;
	sum1+=x;
	cout<<sum1-sum2<<endl;
}
