// A Lucas Theorem based solution to compute nCr % p
#include<bits/stdc++.h>
using namespace std;
 
// Returns nCr % p.  In this Lucas Theorem based program,
// this function is only called for n < p and r < p.
long long unsigned nCrModpDP(long long unsigned n, long long unsigned r, long long unsigned p)
{
    // The array C is going to store last row of
    // pascal triangle at the end. And last entry
    // of last row is nCr
    long long unsigned C[r+1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; // Top row of Pascal Triangle
 
    // One by constructs remaining rows of Pascal
    // Triangle from top to bottom
    for (long long unsigned i = 1; i <= n; i++)
    {
        // Fill entries of current row using previous
        // row values
        for (long long unsigned j = min(i, r); j > 0; j--)
 
            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}
 
// Lucas Theorem based function that returns nCr % p
// This function works like decimal to binary conversion
// recursive function.  First we compute last digits of
// n and r in base p, then recur for remaining digits
long long unsigned nCrModpLucas(long long unsigned n, long long unsigned r, long long unsigned p)
{
   // Base case
   if (r==0)
      return 1;
 
   // Compute last digits of n and r in base p
   long long unsigned ni = n%p, ri = r%p;
 
   // Compute result for last digits computed above, and
   // for remaining digits.  Multiply the two results and
   // compute the result of multiplication in modulo p.
   return (nCrModpLucas(n/p, r/p, p) * // Last digits of n and r
           nCrModpDP(ni, ri, p)) % p;  // Remaining digits
}
 
// Driver program
 main()
{
    long long unsigned n = 1000000000, r = 900, p = 1000000007;
    cout << "Value of nCr % p is " << nCrModpLucas(n, r, p);
    return 0;
}
