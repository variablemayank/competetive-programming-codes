#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int A[9]={0};
	for(int i=0;i<t;i++)
	{
	  int k; cin>>k;
	  A[k]++;
	}	
	for(int i=0;i<=9;i++) cout<<A[i]<<" ";
	int T;
	cin>>T;
	while(T--)
	{
		int l,r;
		cin>>l>>r;
		int count=0;
		for(int i=l;i<=r;i++) 
	    {
	    	count += A[i];
		}
		cout<<count<<endl;                            
	}
}
