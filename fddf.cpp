#include<iostream>
using namespace std;
int main()
{
   int A[100001],n;
   cin>>n;
   for(int i=0;i<n;i++) cin>>A[i];
   int s1=0,s2=0;
   for(int i=0;i<n;i++)
   {
   	s2=s2+A[i];
   	if(s2<0) s2=0;
   	if(s1<s2) s1=s2;
   }
   cout<<s1;
}
