#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	
  	double n,v1,v2;
     cin>>n>>v1>>v2;
     double var1=n/v1;
     double var2=(sqrt(2)*n)/v2;
     if(var1<var2)
      cout<<"Stairs"<<endl;
     else
      cout<<"Elevator"<<endl;
   }
  return 0;
}      
