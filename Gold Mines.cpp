#include <bits/stdc++.h>
#include <bitset>
#include <algorithm>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
#include <limits>

#define sc(a)        scanf("%lld",&a)
#define sc_(a,b)     scanf("%lld %lld",&a,&b)
#define pr(a)        printf("%lld\n",a)
#define pr_(a,b)     printf("%lld %lld\n",a,b)
#define FOR(i,a,b)   for(int i=a;i<=b;i++) 

using namespace std;

int main()
{
	 long long int R,W,Q,arr[1090][1090],dp[1090][1090];
	 memset(dp,0,sizeof(dp));
	 sc_(R,W);
	 FOR(A,1,R)
	 FOR(B,1,W)
	 sc(arr[A][B]);
	 FOR(C,1,R)
	 FOR(D,1,W)
	 {
	 	  arr[C][D]+=arr[C][D-1];
	 	  dp[C][D]=arr[C][D]+dp[C-1][D];
	 }
	 sc(Q);
	 while(Q--)
	 {
	 	  long long int X_1,Y_1,X_2,Y_2;
	 	  sc_(X_1,Y_1);
	 	  sc_(X_2,Y_2);
	 	//  if(X_1>X_2)
	 //	  swap(X_1,X_2);
	 //	  if(Y_1>Y_2)
	 //	  swap(Y_1,Y_2);
	 	  pr(dp[X_2][Y_2]-dp[X_1-1][W]-(dp[X_2][Y_1-1]-dp[X_1-1][Y_1-1]));
	 }
	 return 0;
}
