#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        long long int n,k;
       scanf("%lld%lld",&n,&k);
        long long count =0;
           long long unsigned val  = (n*k);
        for(int i=1;i<=n/2;i++)
        {
        
           long long unsigned val2 = (i*(n-i));
            if(val2<=val) count++;
            
        }
      printf("%lld\n",count*2);
    }
    
}

