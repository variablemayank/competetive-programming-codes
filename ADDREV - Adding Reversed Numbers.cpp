#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
	int sum =0;
	while(n>0)
	{
	   sum = (sum*10)+n%10;
	   n=n/10;
	}
    //cout<<sum;
    return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  int a,b;
	  cin>>a>>b;
	  
	  a = reverse(a);
	  b= reverse(b);
	  cout<<reverse(a+b)<<endl;
	}
}
