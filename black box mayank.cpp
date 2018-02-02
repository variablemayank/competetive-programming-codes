#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
long long gcd(long long a,long long b)
{
	if(b==0)
		return a;
     else
     return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<long long> v(3);
		cin>>v[0]>>v[1]>>v[2];
		sort(v.begin(),v.end());
		long long a=v[0],b=v[1],c=v[2];
		if(pow(c,2)==pow(a,2)+pow(b,2))
		{
			if(gcd(a,b)&&gcd(b,c)&&gcd(a,c)==1)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
		
		}
		else
		{
			cout<<"NO\n";
		}
	}
	return 0;
}
