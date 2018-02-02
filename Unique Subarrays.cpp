#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		v.resize(n);
		for(int i=0;i<n;i++) cin>>v[i];
		int sum=0;
		int cal=n;
		for(int i=0;i<n;i++)
		{
			if(v[i]==i+1)
			{
			  sum=cal*v[i]+sum;	
			}
		    cal--;
		}
		cout<<sum<<endl;
	}
}
