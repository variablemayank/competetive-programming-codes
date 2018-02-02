#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	if(m>=3)
	for(int i=0;i<n;i++)
	{
		int t = rand()%(m+1);
		cout<<t<<' ';
	}
	else cout<<-1;
}
