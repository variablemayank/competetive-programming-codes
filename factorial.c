#include<iostream>
using namespace std;
int fact(int x);
int main()
{
   int t;
   cin>>t;
   fact(t);
   return 0;
 }
fact(int x)
{
fact=fact*fact(x-1);
cout<<fact;
}
