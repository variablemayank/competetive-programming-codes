#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		
	    if(abs(x-z)<abs(y-z)) cout<<"Cat A\n";
	    else if(abs(x-z)==abs(y-z)) cout<<"Mouse C\n";
	    else cout<<"Cat B\n";
	}
	return 0;
}
