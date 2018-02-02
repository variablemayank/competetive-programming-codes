#include<bits/stdc++.h>
using namespace std;

vector<int> v(1000001);
int main()
{
	int t; cin>>t;
	for(int i=0;i<t;i++) cin>>v[i];
	sort(v.begin(),v.begin()+t);
	long long signed int sum =0;
	for(int i=0;i<t-2;i++)
	{
		for(int j=i+1;j<t-1;j++)
		{
			for(int k=j+1;k<t;k++)
			{
			  cout<<v[i]<<v[j]<<v[k]<<endl;
			  sum+=  floor(v[i]+v[j]+v[k])/(v[i]*v[j]*v[k]);  
			}
		}
	}
	cout<<sum<<endl;
	
}
