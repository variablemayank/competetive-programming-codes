#include<bits/stdc++.h>
using namespace std;

int arr[10005];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>arr[i];
	
	while(m--){
		
		int l,r,x;
		cin>>l>>r>>x;
		
		int count =0;
		int var = x-l;
	//	cout<<var<<endl;
		for(int j=l;j<=r;++j){
			if(arr[j]<arr[x])
			var--;
		}
		
		if(var==0){
			cout<<"Yes\n";
		}
		else cout<<"No\n";
	}
	return 0;
}
