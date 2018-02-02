#include<iostream>
using namespace std;
int main()
{
	int n,k,q=0;
	cin>>n>>k;
    if(n>k) 
    {
    	int m;
    	m=n%k;
    	while(m!=k)
    	{
    		m++;
    		k--;
    		q++;
		}
		cout<<q;
	}
	if(n<k)
	{
		while(k%n==0)
		{
			n++;
			k--;
			q++;
			cout<<q;
		}
		
	}
	if(n==k)
	{
		cout<<"0";
	}
	return 0;
}
