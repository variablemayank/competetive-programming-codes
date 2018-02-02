#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
	{long long one=1,zero=1,n,k;
		
		cin>>n;
		if(n==1||n==2)
		{
			if(n==1)
			{
			cout<<"0 1\n";}
			else
			{
			cout<<"1 1\n";}
			
	     
		}
		else
		{
		for(int i=3;i<=n;i++)
		{
			k=one;
			one=zero;
			zero=k+zero;
			
		}
		cout<<one<<" "<<zero<<endl;
	}
	}
	return 0;
}
