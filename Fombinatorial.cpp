#include<bits/stdc++.h>
using namespace std;
int m;
long long fact(long long k)
{
	long long ans =1;
	for(int i=1;i<=5;i++)
	{
		ans*= pow(i,i);
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
    while(t--)
    {
    	long long n,k;
    	vector<long long >vec;
    	scanf("%lld%lld%lld",&n,&m,&k);
    	while(k--)
    	{
    		int val;
    		cin>>val;
    		vec.push_back(val);
		}
		long long compute= fact(n);
	    for(int i=0;i<vec.size();i++)
		{
			compute= compute/fact(vec[i]);
		}
		cout<<compute;
		compute= compute%m;
		printf("%lld\n",compute);
	}
}
