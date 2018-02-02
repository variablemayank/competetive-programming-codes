#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(b-a>10 ) cout<<0;
	else
	{
		int ans =1;
		for(int i= a+1;i<=b;i++)
		{
			ans*= (i%10);
			ans%=10;
		}
		cout<<ans;
	}
}
