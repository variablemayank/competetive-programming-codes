#include<bits/stdc++.h>
using namespace std;

const int maxi = 1e6+6;
long long  arr[maxi];
long long counti[maxi];
long long sol[maxi];

int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i]<=m) counti[arr[i]]++;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=i;j<=m;j+=i)
		{
		  sol[j] += counti[i];
		}
	}
//	for(int i=1;i<=m;i++) cout<<sol[i]<<" ";
//	cout<<endl;
	int idx = max_element(sol+1,sol+m+1)- sol;
	cout<<idx<<" ";
	cout<<sol[idx]<<endl;
	for(int i=1;i<=n;i++)
	{
		if(idx%arr[i]==0) cout<<i<<" ";
	}
}
