#include<iostream>
using namespace std;
int fact(int );
int main()
{
  int n,m,flag=0;
	cin>>n;
  m=fact(n);
  while(m%10==0)
  {
  	flag++;
  	m=m/10;
  	
  	
  }
  cout<<flag;
}
int fact(int x)
{
    int f;
	if(x==1)
	return(1);
	else
	f=x*fact(x-1);
	return (f);
}
    

