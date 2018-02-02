#include<iostream>
#include<cstdio>
using namespace std;
long long arr[999]={0};
long long arr1[999]={0};
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
int t;
cin>>t;
while(t--)
{
int x,y,n,i;
cin>>x>>y>>n;
for(i=0;i<x;i++)	arr[i]=y;
arr1[0]=arr[0];
for(i=1;i<x;i++)arr1[i]=(arr1[i-1]+arr[i]);
int st=-1;
for(i=x;i<n;i++)
{
	arr[i]=arr1[i-1]-(st==-1? 0 : arr[st]);
	arr[i]=arr[i];
	arr1[i]=(arr1[i-1]+arr[i]) -(st==-1? 0 : arr[st]);
	arr1[i]=arr1[i];
    st++;
}
cout<<arr[n-1]<<endl;
}
return 0;
}
