#include<bits/stdc++.h>
using namespace std;
const int maxi = 1000006;
int main()
{
	int n;
	cin>>n;
	int res=1;
	for(int i=1;i<n;i++) res = (res*3)%maxi;
	cout<<res<<endl;
}
