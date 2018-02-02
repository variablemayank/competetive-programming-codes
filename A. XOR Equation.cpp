#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	long long sum,x;
	cin>>sum>>x;
	long long count =0;
	for(int i=0;i<sum/2;i++)
	{
	   int soln = (sum-i)^i;
	   if(soln==x) count+=2;
	}
	if(x==0) cout<<"1";
	else
	cout<<count<<endl;
}
