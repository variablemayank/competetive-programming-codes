#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n,m,k; cin>>n>>m>>k;
	int r[n]={0},c[m]={0},arr[k+1]={0};
	for(int i=1;i<=k;i++)
	{
		int a,b;
		cin>>a>>b>>arr[i];
		if(a==1)
		{
			r[b-1]=i;
		}       
		else
		c[b-1]=i;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[max(r[i],c[j])]<<' ';
		}
		cout<<endl;
	}
}
