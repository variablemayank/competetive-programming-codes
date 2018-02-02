#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin>>t;
  long long arr[100005];
  arr[0] =0;
  for(int i=1;i<=t;i++)
  {
  	long long val;
  	cin>>val;
  	arr[i]= arr[i-1]+val;
  }
  for(int i=1;i<=t;i++) cout<<arr[i]<<" ";
  long long q;
  cin>>q;
  while(q--)
  {
  	 int low,high;
  	 cin>>low>>high;
  	 cout<<arr[high]-arr[low-1]<<endl;
  }
}
