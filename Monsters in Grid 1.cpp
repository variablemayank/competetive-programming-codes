#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,v;
	cin>>n>>k>>v;
	long long  int sum =0,val;
	for(int i=0;i<n*k;i++)
	{
	        cin>>val;
	        sum+=val;
	}
	if(sum<= v) cout<<sum<<endl;
	else cout<<v<<endl;
}
