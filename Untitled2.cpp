#include<bits/stdc++.h>
 
 
using namespace std;
long long unsigned arr[50];
 
long long unsigned int total_xor_subset(long long unsigned n, long long unsigned k)
{
  
    long long unsigned m = 1<<15-1;
    
    
    long long unsigned dp[n+2][m+1];
 
  
    for (long long unsigned i=0; i<=n; i++)
        for (long long unsigned j=0; j<=m; j++)
            dp[i][j] = 0;
 
    dp[0][0] = 1;
 
 
    for (long long unsigned i=1; i<=n; i++)
        for (long long unsigned j=0; j<=m; j++)
            dp[i][j] = dp[i-1][j] + dp[i-1][j^arr[i-1]];
 
    return dp[n][k];
}
 
 
int main()
{
    
    long long unsigned a,b,c;
    cin>>a>>b;
    
    for(int i=0;i<a;i++) cin>>arr[i];
 
    cout << total_xor_subset(a, b);
    return 0;
}
