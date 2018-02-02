#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int coldpositions[2000001];
int main()
{
	double pi=(1+sqrt(5))/2.0;
	for(int i=1;i<1000000;i++)
	{
		coldpositions[i]-=1;
	}
	for(int i=1;i<=1000000;i++)
	{
		int xcord= pi*i;
		int ycord=(pi*pi*i);
		coldpositions[xcord]=ycord;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int i,j;
		cin>>i>>j;
		if(coldpositions[i]==j) cout<<"Chandu\n";
		else cout<<"Chandni\n";
		
	}
}
