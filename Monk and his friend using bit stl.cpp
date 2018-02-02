#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
int t;
cin>>t;
while(t--)
{
	ll p,m;
	int count=0;
	cin>>p>>m;
	bitset<100>b1(p);
	bitset<100>b2(m);
	for(int i=0;i<100;i++)
	{
		if(b1[i]!=b2[i])
		count++;
	}
	cout<<count<<"\n";
}

return 0;
}
