#include <bits/stdc++.h>
#include <bitset>
#include <algorithm>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
#include <limits>
 
#define sc(a)       scanf("%d",&a)
#define sc_(a,b)    scanf("%d %d",&a,&b)
#define pr(a)       printf("%d\n",a)
#define pr_(a)      printf("%d %d\n",a,b)
#define FOR(i,a,b)  for(int i=a;i<=b;i++)
 
using namespace std;
 
int main()
{
	 int tc;
	 sc(tc);
	 while(tc--)
	 {
	 	  int N,M,ans=1,arr[999][999],dp[999][999];
	 	  sc_(N,M);
	 	  FOR(A,1,N)
	 	  FOR(B,1,M)
	 	  {
	 	        sc(arr[A][B]);
	 	        dp[A][B]=-1;
	 	  }
	 	  FOR(C,1,N)
	 	  {
		     FOR(D,1,M)
	 	     {
	 	  	      if(C==1&&D==1)
	 	  	      dp[C][D]=1;
	 	  	      else if(C==1&&D!=1)
	 	  	      {
	 	  	      	   if(arr[C][D]>arr[C][D-1]&&dp[C][D-1]!=-1)
	 	  	      	   dp[C][D]=dp[C][D-1]+1;
				  }
				  else if(D==1&&C!=1)
				  {
				  	   if(arr[C][D]>arr[C-1][D]&&dp[C-1][D]!=-1)
				  	   dp[C][D]=dp[C-1][D]+1;
				  }
				  else if(D!=1&&C!=1)
				  {
				  	   if(arr[C][D]>arr[C-1][D]&&arr[C][D]>arr[C][D-1]&&dp[C-1][D]!=-1&&dp[C][D-1]!=-1)
				  	   dp[C][D]=max(dp[C-1][D],dp[C][D-1])+1;
				  	   else if(arr[C][D]>arr[C-1][D]&&dp[C-1][D]!=-1)
				  	   dp[C][D]=dp[C-1][D]+1;
				  	   else if(arr[C][D]>arr[C][D-1]&&dp[C][D-1]!=-1)
				  	   dp[C][D]=dp[C][D-1]+1;
				  }
				  ans=max(ans,dp[C][D]);
		     }
		     
		  }
		  pr(ans);
	 }
	 return 0;
}
