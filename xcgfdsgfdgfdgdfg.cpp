#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
cin>>test;
while(test--)
{
int num;
cin>>num;
long long int count=0;
long long int hash[1000006]={0};
while(num--)
{
long long int food;
cin>>food;
hash[food]++;
long long int pokeman;
cin>>pokeman;
if(hash[pokeman]==0)
count++;
else
hash[pokeman]--;
}
cout<<count<<endl;
}
return 0;
}
