#include<bits/stdc++.h>
using namespace std;

int arr[1003];
int main()
{

   int  n;
   cin>>n;
   int sum =0;
   for(int i=1;i<=n;i++)
   {
   sum+= arr[i];
    cin>>arr[i];
    }
   
   int m;
   cin>>m;
   while(m--)
   {
     int a,b;
     cin>>a>>b;
     if(a>=sum)
     {
         cout<<a;
         return 0;
     }
     if(b>=sum)
     {
         cout<<sum;
         return 0;
     }
   }
   cout<<"-1";
}
