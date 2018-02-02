#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++) cin>>arr[i];
   
   int g=0;
   for(int i=0;i<n;i++){
   	 g= __gcd(g,arr[i]);
   }
   if(g>1)
   {
   	cout<<"YES\n0\n";
   	return 0;
   }
   int count =0;
   for(int i=0;i<n-1;i++){
   	  int x= arr[i];
   	  int y =arr[i+1];
   	  
      bool chk = x&1;
      if(chk)
      {
      	arr[i] = x-y;
      	arr[i+1] = x+y;
      	count++;
      	--i;
	  }
   }
   if(arr[n-1]&1) count+=2;
   cout<<"YES\n";
   cout<<count<<endl;
   return 0;	
}
