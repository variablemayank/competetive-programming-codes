#include<bits/stdc++.h>
using namespace std;
int papa[150005];
int find(int r)
{
if(papa[r]!=r)
return papa[r]=find(papa[r]);
else return r;
}
int main()
{
int a,b;
cin>>a>>b;
for(int i=1;i<=a;i++)
papa[i]=i;
for(int i=1;i<=b;i++)
{
int x,y;
cin>>x>>y;
int u=find(x);
int v=find(y);
if(u!=v)
{
papa[u]=v;
 
}
}
int co=0,flag=0;
for(int i=1;i<=a;i++)
{
if(papa[i]==i)
co++;
}
 
if(co%2==0)
cout<<"YES"<<endl;
 
else
cout<<"NO"<<endl;
}
