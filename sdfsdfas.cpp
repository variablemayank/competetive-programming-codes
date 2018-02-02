#include<iostream>
using namespace std;
long long int p[10000101]={0};
long long int c[10000101]={0};
int main()
{long long unsigned int n,x;
cin>>n;
for(int i=0;i<n;i++)
{cin>>x;
c[x]++;
}
for(int i=2;i<=10000000;i++)
{if(p[i]>=0)
{
p[i]=c[i];
for(int j=2*i;j<=10000000;j=j+i)
{
    p[j]=-1;
    p[i]=p[i]+c[j];
}   
}
}
for(int i=2;i<=10000000;i++)
{
if(p[i]<0)
{
p[i]=p[i-1];    
}
else{
p[i]=p[i]+p[i-1];   
}   
}   
long long unsigned int y;
cin>>y;
long long unsigned int r,l;
for(int i=0;i<y;i++)
{
cin>>l>>r;  
if(r>10000000)
{
    r=10000000;
}
//cout<<(l>r)?0:p[r]-p[l-1]<<"\n";
if(l>r)
{
    cout<<0<<"\n";
}
else{
    cout<<p[r]-p[l-1]<<"\n";
}
}
return 0;   
}
