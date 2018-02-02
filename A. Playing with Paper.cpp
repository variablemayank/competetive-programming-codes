#include<bits/stdc++.h>
using namespace std;

long long unsigned a,b;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>a>>b;
    long long unsigned count =0;
    
    while(a>0 && b>0)
    {
    	if(a<b)
    	swap(a,b);
    	count += a/b;
    	a -= b*(a/b);
    	
	}
	cout<<count;
	return 0;
}
