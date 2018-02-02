#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long t ;
   cin>>t;
   int count =0;
   for(int i=1;i<=3*100005;i++)
   {
   	   for(int j =i+1;j<3*100000 &&j<=t&&i+j<=t;j++)
   	   {
   		  long long g =__gcd(i,j);
   		  if(t%g==0) count++;
	   }
   }
   cout<<count<<endl;
}
