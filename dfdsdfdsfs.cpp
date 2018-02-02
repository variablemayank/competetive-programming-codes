#include<stdio.h>
#include<cstring>
#include<iostream>
#include<string.h>
#include<map>
#include<deque>
#include<queue>
#include<stack>
#include<sstream>
#include<iostream>
#include<iomanip>
#include <climits>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>
#include<set>
#include<complex>
#include<list>
// TOO lazy 
using namespace std;
#define mfor(i,n) for(int i=0;i<n;i++)
#define LL long long
#define vi vector<int>
#define pb push_back
#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%lld",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define myfor(i,a,b) for(i=a;i<=b;i++)
#define IS_ODD( num )   ((num) & 1)
#define IS_EVEN( num )  (!IS_ODD( (num) ))
#define mod 1000000007
int compare (const void * a, const void * b)
{
  
return *(int*)a-*(int*)b;
}
  
/*-----------------------------------------------*/
  
long long mp[4];
long long mpp[4];
char s[1000000+1];
long long  ans = 0;
  
int main()
{
int t,n;
 
 mp[0]=mp[1]=mp[2]=0;mpp[0]=mpp[1]=mpp[2]=0;ans = 0;
 cin>>n;
 cin>>s;
 
//n = strlen(s);
  
mfor(i,n)
s[i] = s[i]-'0';
  
mfor(i,n){
  
mpp[ (0+s[i])%4 ] = mp[0];
mpp[ (1+s[i])%4 ] = mp[1];
mpp[ (2+s[i])%4 ] = mp[2];
  
 if(!(s[i]&1)){
     
   if(s[i]%8==0){
   // cout<<" 6 "<<ans<<"   "<<mp[0]<<endl;
    ans+= 1LL + (long long)mp[0];
    ans = ans%mod;
    }
  else{
  
    if(s[i]%4==2)
     ans+= (long long)mp[1];
    else if(s[i]%2==1)
     ans+= (long long)mp[2];
    else
    ans+= (long long)mp[0];
    ans = ans%mod;
  
     }
//cout<<"ans at "<<(int)s[i]<<" -  "<<ans<<endl;
 }
  
mp[0]+=mpp[0];
mp[1]+=mpp[1];
mp[2]+=mpp[2];
mp[(s[i])%4]++;
  
  
mp[0] = mp[0]%mod;
mp[1] = mp[1]%mod;
mp[2] = mp[2]%mod;
 
  
}
 
cout<<mp[0]<<endl;
}
 
