#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
	int  n,m;// n<m
	cin>>n>>m;
	int sq=sqrt(n);
	if(sq*sq==n){
	cout<<sq<<endl;	
	continue;
	}

	else{
			bool flag=false;
		for(int i=1;i<=100000;i++){
			int val=m*i+n;
			int sq2=sqrt(val);
			if(sq2*sq2==val){
				cout<<sq2<<endl;
				flag=true;
				break;
			}
		}
		if(flag==false)
		cout<<-1<<endl;
		continue;
	}
}
return 0;
}
