#include<iostream>
using namespace std;

int main()
{
	long long int n,f=1,i;
	int count=0;
	cin>>n;
	if(n==1){
		cout<<n;
	}
	else{
	
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	while(f%10==0)
	{
		count++;
		f=f/10;
	}
	cout<<count;
	return 0;
}
}
