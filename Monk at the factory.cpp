#include<iostream>
using namespace std;
int main()
{
	int t,A[1000],sum=0;
	cin>>t;
	for(int i=0;i<t;i++) cin>>A[i];
	
	for(int i=0;i<t;i++) sum+=A[i];
	
	if(sum/2==t-1) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
	
}
