#include<bits/stdc++.h>
using namespace std;
void showbits(long long n)
{
     long long ans =1;
     while(n)
     {
     	 long long b= n&1;
     	 n=n>>1;
     	 if(!b) ans = ans*2;
	 }
	 cout<<ans<<endl;
}

int main()
{
	long long t;
	cin>>t;
	showbits(t);
}
