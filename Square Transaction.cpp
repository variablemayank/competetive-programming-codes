#include<iostream>
#define ll long long 
using namespace std;
#define MAX 1001
int main()
{
	int t;cin>>t;
	ll A[t];
	for(int i=0;i<t;i++)
	{
		cin>>A[i];
	}
	ll k,value;
	cin>>k;
	
	while(k-->0)
	{
		int sum=0;
	  	cin>>value;
	  	for(int i=0;i<t;i++)
	  	{
	  	  	sum += A[i];
	  	  	if(sum>=value)
	  	  	{
	  	  		cout<<i+1<<endl;
	  	  		break;
		    }
		}
		if(sum<value) cout<<"-1\n";
	}
	return 0;
	
}
