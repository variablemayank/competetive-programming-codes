#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++) cin>>arr[i];
   
   int g=0;
   for(int i=0;i<n;i++)
   {
   	 g= __gcd(g,arr[i]);
   }
   // if the gcd of the all of the elements is greater than 1 then output is yes 
   if(g>1)
   {
   	cout<<"YES\n0\n";
   	return 0;
   }
   // now x = 1 and y  =2  the now of traverse you have to do for make their gcd greater than 
   // one is ai = x-y ,a(i+1) = x+y which is equal to -1 and 3 now in the next operation you will get 
   // -4 ,2 and their gcd is greater than means we did two operations 
   int count =0;
   for(int i=0;i<n-1;i++)
   {
   	  int x= arr[i];
   	  int y =arr[i+1];
   	  // in this condition we check about the odd codition  x&1 means chk will be true if
	  // the value of x is odd otherwise to need to change
   	  // if it is even
   	  // so after the operation we change the value of a[i] and a[i+1] to x-y and x+y then again we go to x 
   	  // that is why we are doing the operation --i so check whether the x-y value is still odd or even 
   	  // if it is even so no need change it
      bool chk = x&1;
      if(chk)
      {
      	cout<<x<<" "<<y<<endl;;
      	arr[i] = x-y;
      	arr[i+1] = x+y;
      	count++;
      	--i;
	  }
   }
   // here we are checking about the last value because we are change every value which is odd but last 
   // value is left that is n-1 so for what condition 
   // take an example if the last value is  n-1 is 3 and n-2 is 2 how many operation you have to perform 
   // to make it to even ie gcd greater than one  3-2 ,2+3  = -1 5 then -4, 4 go get gcd greater than 4 
   // the no of operation is 2 so think in even and odd you will get exactly get the intuition
   // if the last value is even no need to count+=2
   if(arr[n-1]&1) count+=2;
   cout<<"YES\n";
   cout<<count<<endl;
   return 0;	
}
