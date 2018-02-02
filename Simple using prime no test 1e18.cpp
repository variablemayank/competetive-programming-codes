#include<bits/stdc++.h>
using namespace std;


typedef long long ii;

#define MAX 1e4


bool isPrime(ii n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (ii i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}
int main()
{
	ii n,ans=1;
	vector<ii>prod(MAX+1);
	prod[1] =1;
	scanf("%d",&n);
	for(ii i=1;i<=n;i++){
		ii var; scanf("%lld",&var);
		
	  ans =  ( ans * ( isPrime(var) ? var : 1)) % 131071393213;
	   
	} 
	printf("%d\n",ans);
}
