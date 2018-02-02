#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAX 10000
int main()
{
	
	int k=0;
 ll t,A[MAX],B[MAX];
 cin>>t;
 for(int i=0;i<t;i++) cin>>A[i];	
 for(int i=0;i<t;i=i++)
 {   
     for(int j=1;j<=t;j++)
 	 {
 		if(__gcd(A[i],A[i+1])==1)
 		{
 			B[k]=A[i]; 
 	k++;
		}
	 }
	
 }
  for(int i=0;i<t;i++) cout<<B[i];
	 	return 0;
}
