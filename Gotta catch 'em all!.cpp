#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int k=t;
	vector<int> v;
	while(t--)
	{
		int n;
		cin>>n;
		v.push_back(n);
	}
	sort(v.rbegin(),v.rend());
	int max =v[0];
	for(int i=1;i<k;i++)
	{
		if(i+v[i]>max) max=i+v[i];
	}
	cout<<max+2<<endl;
}
