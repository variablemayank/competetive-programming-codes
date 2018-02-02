#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  unsigned long long  a,b;
	  cin>>a>>b;
	  unsigned long long count =1;
	  for(unsigned long long x = a;x<=b;x++)
	  {
	  	if((((x ^ (x >> 1)) + 1) & (x ^ (x >> 1))) == 0) count++;
	  }
	  cout<<count<<endl;
	}
}
