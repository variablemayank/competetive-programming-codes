#include <bits/stdc++.h>
using namespace std;
int rev(int n){
	int sum=0;
	while(n>0){
	sum=sum*10+(n%10);
		n=n/10;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<"sum1 is "<<rev(b)<<endl;
		int diff=abs(a-rev(b));
		cout<<diff%9<<endl;
		
	}
	return 0;
}
