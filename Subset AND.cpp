#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
    while(t--)
    {
    	int a,b;
    	cin>>a>>b;
    bool flag =false;
    	for(int i=0;i<b;i++)
    	{
    		int n;
    		cin>>n;
    		if(n&a==0) 
			{
			flag = true;
			break;
		    }
		    else
		    a= (n&a)&a;
		}
		if(flag==true) cout<<"Yes\n";
		else 
		cout<<"No\n";
	}
}
