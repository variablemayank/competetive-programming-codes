#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
   	
   	  int k;
   	  cin>>k;
   	  int sum=0;
   	int square_root = (int) sqrt(k) + 1;
   	
   for(int i = 1; i <=square_root; i++) 
   { 
      if (k % i == 0&&i*i!=k)
         {
		 sum=sum+i;
	     }
         
    if (k % i == 0&&i*i==k)
        {
        sum=sum+i;
     }
    }
	  cout<<sum;
	  if(sum*2==n/2) cout<<"YES\n";
	  else cout<<"NO\n";
   }
}
