#include<iostream>
using namespace std;
long long fact(int );
int main()
{
  long long int n,m,flag=0;
	cin>>n;
  m=fact(n);
  
  while(m%10==0)
  {
  	flag++;
  	m=m/10;
  }
  cout<<flag;
}
long long fact(int x)
{
    long long int f;
	if(x==1)
	return(1);
	else
	f=x*fact(x-1);
	return (f);
}
    

