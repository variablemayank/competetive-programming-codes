#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long int K;
	string X;
	cin>>K>>X;
	for(int A=0;A<X.size();A++)
	K-=X[A]-'0';
	if(K<=0)
	return cout<<0,0;
	sort(X.begin(),X.end());
	for(int A=0;A<X.size();A++)
	{
		K-=9-(X[A]-'0');
		if(K<=0)
		return cout<<A+1,0;
	}
	return 0;
}
