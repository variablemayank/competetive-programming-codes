#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
//	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		ll n;
	    scanf("%lld",&n);
	    vector <int> v;
	    v.clear();
		for(int i=1;i<=n;i++){
			int x;
	       scanf("%d",&x);
			if(x==0)
			continue;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		int ans=n-v[v.size()-1];
		printf("%d\n",ans);
	}
	
}
