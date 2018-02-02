#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	if(n==1 || n==2 || n==3 ) puts("1");
    	else cout<<n-2<<endl;
	}
}
