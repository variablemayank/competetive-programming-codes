#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int count =0;
	for(int i=0;i<t;i++)
	{
        if((t+i)==(t^i)) 
        {
        	cout<<t<<" "<<i<<endl;
        	count++;
		}
	}
	cout<<count<<endl;
}
