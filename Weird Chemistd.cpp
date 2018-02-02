#include<iostream>
using namespace std;
int main()
{
	long long A[100000];
	long long sum=0;
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++) 
	{
	cin>>A[i];
//	sum=sum+A[i];
    } 
    int count=0;
    int k=0,first,second;
    while(m--)
    {
    	
    	int l,r,x;
    	int sum1=0;
    	cin>>l>>r>>x;
    	
          for(int i=l;i<=r;i++)
		   sum1=sum1+A[i];
          
          
          if(sum1>=x) count++;
		
     }
	cout<<count<<endl;
}
