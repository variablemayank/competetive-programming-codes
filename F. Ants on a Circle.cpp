#include<bits/stdc++.h>
using namespace std;
#define l1 long long
int main()
{
   l1 n,m,k;
   scanf("%lld%lld%lld",&n,&m,&k);
   l1 arr[n];string s;
   for(int i=0;i<n;i++)
   {
   	  cin>>arr[i];
   	  cin>>s[i];
   }
   for(int i=0;i<n;i++)
   {
   	   if(m ==k/2) cout<<arr[i]<<" ";
   	    else if(s[i]=='R')
   	   {
   	   	  arr[i] =arr[i]+m-k-1;
   	   	  cout<<arr[i]<<" ";
	   }
	   else if(s[i]=='L')
	   {
	   	  arr[i] = arr[i] + k - m+1;
	   	  cout<<arr[i]<<" ";
	   }
   }
}
