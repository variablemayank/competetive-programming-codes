#include<iostream>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		int flag1=0;
		cin>>n;
		int max_=n;
		int count=0;
        while(n!=1)
		{
			if(n%2==0) n=n/2;
			
			else n= (3*n)+1;
			
			cout<<n<<" ";
			
			int current =n;	
		
			if(current <= max_)
			flag1= max(flag1,current);	
		}
		
		cout<<flag1<<endl; 
	}
}
