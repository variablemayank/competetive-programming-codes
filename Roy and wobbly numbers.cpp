#include<iostream>
using namespace std;
int rec(int ,int );
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,m;
		
		cin>>x>>y;
		m=rec(x,y);
		cout<<m<<endl;;
	}
}
int rec(int n,int k)
{
	int ab;
	ab=(10+k-1)+(10+k-1)/11;
	if(ab>=100) return (-1);
	long int number=0;
	for(int i=1;i<=n/2;i++)
	number=number*100+ab;
	number=(n%2==1?(number*10+ab/10):(number+0));
	return (number);
}

