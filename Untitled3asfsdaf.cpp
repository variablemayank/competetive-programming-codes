#include<iostream>
//#include<set>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int arr[n+1]={};
//memset(arr,0,sizeof(arr));
int count=0;
for(int i=0;i<n;i++)
{
int a,b;
cin>>a>>b;
arr[a]=arr[a]+1;
if(arr[b]==0)
count++;
else
{
arr[b]=arr[b]-1;
}
}
cout<<count<<endl;
}
return 0;
}

