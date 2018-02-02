#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int  main()
{
	ll  n,m;
	cin>>n>>m;
	ll  sum = m;
    ll  stress=0;
	for(ll  i=0;i<n;i++)
	{
	  char s; ll  val;
	  cin>>s>>val;
	  if(s=='+')
	  {
	  	 sum+=val;
	  }
	  if(s =='-')
	  {
	  	 if(val>sum)
	  	 {n
	  	    stress++;
		 }
		 else
		 {
		 	sum -= val;
		 }
	  }
	}
	cout<<sum<<" "<<stress<<endl;
}
