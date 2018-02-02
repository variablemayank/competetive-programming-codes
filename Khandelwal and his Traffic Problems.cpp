#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n;vector<int>v(100);
	cin>>k>>n;int sum=0;
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
       sum+=v[i];
	}
	int var = k*n;
	cout<<sum-var<<endl;
	
}
