#include<bits/stdc++.h>
using namespace std;

const int n = 200005;


vector<int> arr;
vector<int> brr;

int main()
{
	int a,b;
	cin>>a>>b;
	
	
	for(int i=0;i<a;i++)
	{
		int k;
		cin>>k;
		arr.push_back(k);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<b;i++)
	{
		int k;
		cin>>k;
		brr.push_back(k);
	}
	
	for(int i=0;i<b;i++)
	{
		int idx = upper_bound(arr.begin(),arr.end(),brr[i])-arr.begin();
		cout<<idx<<endl;
	}
	
	return 0;
}
