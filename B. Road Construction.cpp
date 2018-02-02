// Star graph
#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main()
{
	int n,m;
	cin>>n>>m;
    memset(arr,0,sizeof(arr));
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		arr[a] =1;
		arr[b] =1;
	}
	int i;
	for(i=1;i<=n;i++) if(arr[i]==0) break;
	cout<<n-1<<endl;
	for(int j=1;j<=n;j++)
	{
	   if(j!=i )cout<<i<<" "<<j<<endl;
	}
}
