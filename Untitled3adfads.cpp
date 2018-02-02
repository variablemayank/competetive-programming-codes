#include<bits/stdc++.h>
using namespace std;
int cnt(long long int arr[],long long int  n,long long int  sum)
{
if(n<0)
return 0;
if(n==0 && sum==0)
return 1;
if(sum==0)
return 1+cnt(arr,n-1,sum^arr[n-1]);
return cnt(arr,n-1,sum^arr[n-1])+cnt(arr,n-1,sum);
}
int main(void)
{
int n;
cin>>n;
long long int k;
cin>>k;
long long int arr[n];
int x=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
x=x^arr[i];
}

cout<<cnt(arr,n,k)<<endl;
}
 
