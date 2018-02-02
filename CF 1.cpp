#include<bits/stdc++.h>
using namespace std;

#define ll long long 
const int maxi =1000000007;


int  main()
{
	int a,b;
	cin>>a>>b;
    int countodd =0;
    int counteven =0;
    if(a==0 && b==0 ) return cout<<"NO",0;
    for(int i=1;i<=(a+b);i++)
    {
    	if(i&1) countodd++;
    	else counteven++;
    }
    if((a==counteven &&b== countodd) || (a==countodd && b== counteven)) cout<<"YES";
    else cout<<"NO";
}

