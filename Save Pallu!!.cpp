#include<bits/stdc++.h>
using namespace std;
typedef long long int ull;

ull fact(ull x)
{
	if(x==1) return 1;
	else 
	{
	
	ull c= fact(x-1)*x;
	return c;
    }
	
}
int main()
{
	ull n;
	cin>>n;
	if(n==0 ||n==1) cout<<"0"<<endl;
	else 
	{
		ull sum =0;
		ull val =fact(n);
	 for(int i=2;i<=n;i++)
	 {
	 	int cal = fact(n-i);
	 	ull prod = val/cal;
	 	cout<<cal<<endl;
	 }
	 cout<<sum<<endl;
    }
}
