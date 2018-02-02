#include<bits/stdc++.h>
using namespace std;

const int mod = 1073741824;

int cnt[1000000]={0};
void div()
{
   for(int i = 1; i <= 1000000; i++)
		for(int j = i; j <= 1000000; j += i)
			cnt[j] += 1;
}
int main()
{
	ios::sync_with_stdio(false);
	div();
	int n,m,k;
	cin>>n>>m>>k;
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int l=1;l<=k;l++)
			{
			//	cout<<i<<" "<<j<<" "<<l<<endl;
			   sum =(sum%mod+ cnt[i*j*l]%mod)%mod; 
		    }
		}
	}
	cout<<sum<<endl;
}
