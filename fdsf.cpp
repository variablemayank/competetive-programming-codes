#include<bits/stdc++.h>
using namespace std;

int t;
int arr[2*1000001];
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
		
	}
	int count=0,carry=0,carry1=0;
	for(int i=1;i<t;i++)
	{   
	    carry1 =arr[i]%2;
	    carry = carry1;
		if(arr[i]%2==0)
		{
			continue;
		}
		else
		{
	       carry =carry1-carry;
	    }
	}
	if(count==1) cout<<"YES\n";
}

