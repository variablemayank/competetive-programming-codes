// A Dynamic Programming based solution to compute nCr % p
#include<bits/stdc++.h>
using namespace std;
 
// Returns nCr % p
long long unsigned nCrModp(long long unsigned n, long long unsigned r, long long unsigned p)
{
   
      long long  C[r+1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; 
 
  
    for (long long unsigned i = 1; i <= n; i++)
    {
        
        for (long long unsigned j = min(i, r); j > 0; j--)
 
            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j-1])%p;
    }
    C[n] =1;
    for(long long unsigned j=0;j<=n;j++)
    cout<<C[j]<<" ";
    cout<<endl;
}
 
// Driver program
long long unsigned main()
{
	long long unsigned t;
	cin>>t;
	while(t--)
	{
		long long unsigned n;
		cin>>n;
		nCrModp(n, n-1, long long unsigned007);
	}
  
    return 0;
}
