#include<bits/stdc++.h>
using namespace std;
int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
	    int k = modInverse(n,m);
       
        if(n>m) cout<<"-1\n";
        if(n<=m &&(n!=0 &&m!=0)) cout<< sqrt(k)<<endl;
        if((n==0||m==0 ) )cout<<"0\n";
	}
}
