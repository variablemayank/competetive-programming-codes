#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	scanf("%lld",&t);
	if(t==0) cout<<"1\n";
	else
	{
		cout<<(long long)(pow(8,(t-1)%4+1))%10<<endl;
	}
}
