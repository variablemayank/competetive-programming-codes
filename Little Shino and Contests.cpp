#include<bits/stdc++.h>
using namespace std;

#define jadu ios_base::sync_with_stdio(false);

const int mod = 1000000007;
int arr[5];
int brr[5];

int sum1=0;
int sum2=0;
int dp[11][11][11][11][11][11];
int ans =0;
int solve(int sum2,int last)
{
	if(sum2==sum1) return 1;
	
	int ans =0,temp;
	if(dp[arr[0]][arr[1]][arr[2]][arr[3]][arr[4]][last]>-1)
	return dp[arr[0]][arr[1]][arr[2]][arr[3]][arr[4]][last];
	
	for(int j=0;j<5;j++)
	{
	    if(sum2<sum1&&j!=last)
	    {
	   	    int temp = arr[j];
	   	    for(int i=1;i<=arr[j] && i<=brr[j]; i++)
	   	    {
		   	  	arr[j]-=i;
		   	  	ans+= solve(sum2+i,j);
		   	  	arr[j] =temp;
		   	  	ans %=mod;	
			}
		}	
    }
    ans%=mod;
    dp[arr[0]][arr[1]][arr[2]][arr[3]][arr[4]][last] =ans;
    return ans;
}
int main()
{
	memset(dp,-1,sizeof(dp));
    for(int i=0;i<5;i++)
    {
   	 cin>>arr[i];
   	 sum1+= arr[i];
    }
   
    for(int i=0;i<5;i++)
    {
   	  cin>>brr[i];
    }
    int ans = solve(0,-1);
    cout<<ans<<endl;
    return 0;
}
