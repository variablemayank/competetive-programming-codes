#include<bits/stdc++.h>
using namespace std;

bool isprime(long long n)
{
	if(n<2) return true;
  for(int i=2;i*i<=n;i++)
  	if(n%i==0) return false;
  return true;
}
int main()
{
	long long  t;
	cin>>t;
	if(isprime(t)) cout<<"1";
	else if(t%2==0) cout<<"2";
	else
    {
    	if(isprime(t-2)) cout<<"2";
    	else cout<<"3";
	}
	return 0;
}
