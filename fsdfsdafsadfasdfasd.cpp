#include <iostream>
using namespace std;
int main() {
	int i,j,k,c,n,m,v=0,d=0,w=0;
	cin>>n>>k;
	if(n%2==0)
		w=n/2;
	else
		w=(n/2)+1;
	int a[n][k],b[n]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<k;j++)
		{
			if(a[i][j]==1)
				c++;
		}
		b[v]=c;
//		cout<<b[v]<<" ";
		v++;
	}
	for(i=0;i<v;i++)
	{
		if(b[i]>w)
		{
			d++;
			break;
		}
	}
	if(d>0)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
